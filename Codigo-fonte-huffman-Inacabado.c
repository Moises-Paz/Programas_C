#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

typedef struct Node
{
	char* str;
	int freq;
	struct Node *left;
	struct Node *right;
}Node;

typedef struct Tree
{
	Node *root; 
}Tree;

void print(Node* no, int nivel)
{
    if(no)
    {
		if(no->str) printf("dado: %s   nivel: %d\n",no->str, nivel);
        print(no->left, nivel+1);
        print(no->right, nivel+1);
    }
}

void* verifica(void* p)
{
	if(!p) exit(printf("Nao foi possivel alocar memoria."));
}

void ordena(int* freq, char** bits, int size)
{
	int comeco = 0;
	int menor;
	int auxF;
	char *auxB;
    while(comeco < size-1)
    {
        menor = comeco;

        for(int i = comeco; i < size; i++) if(freq[i] < freq[menor]) menor = i;
        auxF = freq[comeco];
        freq[comeco] = freq[menor];
        freq[menor] = auxF;

        auxB = bits[comeco];
        bits[comeco] = bits[menor];
        bits[menor] = auxB;

        comeco++;
    }
}

Node* novoNo(char* str, int freq)
{
	Node* no = (Node*) malloc(sizeof(Node));
	verifica(no);
  
    no->str = str;
    no->freq = freq;
	no->left = NULL;
    no->right = NULL;
}

void insere(Node* esq, Node* dir, Node* root)
{
	if(root)
    {
		if(esq) root->left = esq;
		if(dir) root->right = dir;
    }
}

typedef struct Link
{
	Node* node;
    struct Link* next;
}Link;

Link* novoLink(Node* no)
{
	Link* link = (Link*) malloc(sizeof(Link));
	verifica(link);
	link->node = no;
	link->next = NULL;
	return link; 
}

Tree* newTree(Node *node)
{
	Tree* tree = (Tree*) malloc(sizeof(Tree));
	tree->root = node;
}

Node* huffman(char** arr, int* freq, int size)
{
	ordena(freq, arr, size);
	Node* head = novoNo(arr[0],freq[0]);
	Node* aux;
	Link* lhead = novoLink(head);
	Link* ltail = lhead;
	Link* laux;
	Link* laux2;

	for(int i = 1; i < size; i++)
    {
    	aux = novoNo(arr[i],freq[i]);
    	laux = novoLink(aux);
    	ltail->next = laux;
    	ltail = ltail->next;
    }
    
	while(1)
    {
    	aux = novoNo(NULL, lhead->node->freq + lhead->next->node->freq);
    	insere(lhead->node, lhead->next->node, aux);
    	
    	laux = lhead; 
    	lhead = lhead->next->next;
    	free(laux->next);
    	laux->node = aux;
    	laux->next = NULL;
    	
		if(!lhead) 
        {
        	lhead=laux;
        	break;
        }
        laux2 = lhead;

        if(laux->node->freq <= lhead->node->freq) 
        {
        	laux->next = lhead;
			lhead = laux;
        }
      	else while(1) 
        {
			if(laux2->next) 
            {
				if(laux->node->freq <= laux2->next->node->freq) 
            	{
					laux->next = laux2->next;
					laux2->next = laux;
					break;
            	}
				else laux2 = laux2->next;
            }
			else 
            {
				laux2->next = laux;
				break;
            }
        }
    }
	Node* root = lhead->node;
	free(laux);
	free(laux2);
	free(lhead);
	free(ltail);
	return root;
}


const char* filename = "C:\\Users\\Pichau\\OneDrive\\Imagens\\TRABALHO_DE_PLP.png";

int main(void) 
{
    FILE* in_file = fopen(filename, "rb");
    if (!in_file) 
    {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    struct stat sb;
    if (stat(filename, &sb) == -1) 
    {
        perror("stat");
        exit(EXIT_FAILURE);
    }
    char *aux;
    char *file_contents = malloc(sb.st_size);
    char **binStrs = (char**)malloc(sizeof(char*)*sb.st_size);

    fread(file_contents, sb.st_size, 1, in_file);

    printf("read data:\n %s\n", file_contents);
    fclose(in_file);

    int len;
    for(int i=0;i<sb.st_size;i++) 
    {   
        binStrs[i] = itoa(file_contents[i],(char*)malloc(sizeof(char)*33),2);
        if(file_contents[i]<0) binStrs[i]=&binStrs[i][24];
        
        len = strlen(binStrs[i]);
        if(len<8)
        {
            aux=malloc(sizeof(char)*9);
            int j;
            for(j = 0; j < (8-len);j++) aux[j]='0';
            aux[j]='\0';
            binStrs[i]=strcat(aux,binStrs[i]);
        }
    }

    free(file_contents);

    puts("\nbin:");
    for(int i=0;i<sb.st_size;i++) 
    {
        printf("%s ",binStrs[i]);
        if((i+1)%16==0)puts("");
    }

    char** uniques = malloc(sizeof(char*)*sb.st_size);
    int* freq = malloc(sizeof(int*)*sb.st_size);
    for(int i=0;i<sb.st_size;i++) freq[i]=1;
    int uniqueQuant=1;
    int state=0;
    uniques[0]=binStrs[0];
    for(int i=1;i<sb.st_size;i++)
    {
        for(int j=0;j<uniqueQuant;j++)
        {
            if(strcmp(binStrs[i],uniques[j])==0)
            {
                freq[j]++;
                break;
            }
            else if(j==uniqueQuant-1) state=1;
        }
        if(state==1)
        {
            uniques[uniqueQuant]=binStrs[i];
            uniqueQuant++;
            state=0;
        }
    }

    puts("\n\nuniques:");
    for(int i=0;i<uniqueQuant;i++)
    {
        printf("%s %d\n",uniques[i],freq[i]);
    }

    Tree* tree = newTree(huffman(uniques, freq, uniqueQuant));
	puts("\narvore:");
	print(tree->root, 0);
    
    exit(EXIT_SUCCESS);
}
