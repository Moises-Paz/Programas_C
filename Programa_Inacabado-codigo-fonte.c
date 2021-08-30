#include <stdio.h>
#include <stdlib.h>
typedef struct dados{
	char nome[100];
	char data[10];
	int valor;
	int juros;
	struct dados *esq;
	struct dados *dir;
}DADOS;

DADOS* criaArvore(void){
	return NULL;
}

void minusculo(char *palavra){
	for(int i=0; palavra[i] != '\0'; i++){
		switch (palavra[i]){
			case 'A':
				palavra[i] = 'a';
				break;
			case 'B':
				palavra[i] = 'b';
				break;
			case 'C':
				palavra[i] = 'c';
				break;
			case 'D':
				palavra[i] = 'd';
				break;
			case 'E':
				palavra[i] = 'e';
				break;
			case 'F':
				palavra[i] = 'f';
				break;
			case 'G':
				palavra[i] = 'g';
				break;
			case 'H':
				palavra[i] = 'h';
				break;
			case 'I':
				palavra[i] = 'i';
				break;
			case 'J':
				palavra[i] = 'j';
				break;
			case 'K':
				palavra[i] = 'k';
				break;
			case 'L':
				palavra[i] = 'l';
				break;
			case 'M':
				palavra[i] = 'm';
				break;
			case 'N':
				palavra[i] = 'n';
				break;
			case 'O':
				palavra[i] = 'o';
				break;
			case 'P':
				palavra[i] = 'p';
				break;
			case 'Q':
				palavra[i] = 'q';
				break;
			case 'R':
				palavra[i] = 'r';
				break;
			case 'S':
				palavra[i] = 's';
				break;
			case 'T':
				palavra[i] = 't';
				break;
			case 'U':
				palavra[i] = 'u';
				break;
			case 'V':
				palavra[i] = 'v';
				break;
			case 'W':
				palavra[i] = 'w';
				break;
			case 'X':
				palavra[i] = 'x';
				break;
			case 'Y':
				palavra[i] = 'y';
				break;
			case 'Z':
				palavra[i] = 'z';
				break;
		}		
	}
}

DADOS* criaNo(char nome[], char data[], int valor, int juros){
	DADOS *novo = (DADOS *) malloc(sizeof(DADOS));
	if(novo){
		char verifica = 'a';
		for(int i=0; verifica != '\0'; i++){
			novo->nome[i] = nome[i];
			verifica = nome[i];
		}
		verifica = 'a';
		for(int i=0; verifica != '\0'; i++){
			novo->data[i] = data[i];
			verifica = data[i];
		}
		novo->juros = juros;
		novo->valor = valor;
		novo->esq = NULL;
		novo->dir = NULL;
	}
	return novo;
}

DADOS* buscaNo(char nome[], DADOS *raiz){
	if(raiz){
		int i = 0;
		for(; nome[i] == raiz->nome[i] && nome[i] != '\0'; i++);
		if(nome[i] == '\0'){
			return criaNo(raiz->nome, raiz->data, raiz->valor, raiz->juros);
		}
		else{
			if(nome[i] < raiz->nome[i]) return buscaNo(nome, raiz->esq);
			else return buscaNo(nome, raiz->dir);
		}	
	}
}

DADOS* insereDados(void){
	char nome[100];
	char data[10];
	int valor;
	int juros;
	puts("NOVO CADASTRO");
	fflush(stdin);
	printf("Nome: ");
	gets(nome);
	while(nome[0] == '\0'){
		fflush(stdin);
		printf("Nome: ");
		gets(nome);
	}
	minusculo(nome);
	fflush(stdin);
	printf("Data: ");
	gets(data);
	while(data[0] == '\0'){
		fflush(stdin);
		printf("Data: ");
		gets(data);
	}
	fflush(stdin);
	printf("Juros: ");
	scanf("%d", &juros);
	fflush(stdin);
	printf("Valor: ");
	scanf("%d", &valor);
	DADOS *novo = criaNo(nome, data, valor, juros);
	if(novo) return novo;
	else{
		puts("Fala ao criar nova struct");
		system("pause");
		exit(1);
	}
}

void insereNo(DADOS *no, DADOS **raiz){
	if(*raiz){
		if(!no){
		puts("Erro!");
		system("pause");
		exit(1);
		}
		int i = 0;
		for(;no->nome[i] == (*raiz)->nome[i] && no->nome[i] != '\0';i++);
		
		if(no->nome[i] < (*raiz)->nome[i]) insereNo(no, &(*raiz)->esq);
		else if(no->nome[i] > (*raiz)->nome[i]) insereNo(no, &(*raiz)->dir);
			else insereNo(no, &(*raiz)->esq);
	}
	else{
		*raiz = no;
	}
}

void mostraTudo(DADOS *raiz){
	if(raiz){
		mostraTudo(raiz->esq);
		printf("Nome: %s\n", raiz->nome);
		printf("Data: %s\n", raiz->data);
		printf("Juros: %d\n", raiz->juros);
		printf("Valor: %d\n", raiz->valor);
		mostraTudo(raiz->dir);
	}
}

int main(){
	DADOS *raiz = criaArvore();
	DADOS *dado = insereDados();
	insereNo(dado, &raiz);
	dado = insereDados();
	insereNo(dado, &raiz);
	dado = insereDados();
	insereNo(dado, &raiz);
	dado = insereDados();
	insereNo(dado, &raiz);
	dado = insereDados();
	insereNo(dado, &raiz);
	char nome[100];
	fflush(stdin);
	gets(nome);
	minusculo(nome);
	puts("+++++++++++++");
	dado = buscaNo(nome, raiz);
	mostraTudo(dado);
	return 0;
}
