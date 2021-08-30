#include <stdio.h>
#include <stdlib.h>
typedef struct No{//elementos;
	int data;
	struct No *next;
	struct No *ant;
}No;


typedef struct Lista{//estrutura;
	No *head;
	No *tail;
}Lista;


Lista* criaLista(Lista *l){
	l = (Lista*) malloc(sizeof(Lista));
	l->head = NULL;
	l->tail = NULL;
	return l;
}

void insereFinal(Lista *l, int n){
	//if(l == NULL) l = criaLista(l);
	No *novo = NULL;
	novo = (No *) malloc(sizeof(No));
	novo->data = n;
	if((l->head == NULL) && (l->tail == NULL)){
		novo->next = NULL;
		novo->ant = NULL;
		l->head = novo;
		l->tail = novo;
	}
	else{
		novo->next = NULL;
		novo->ant = l->tail;
		l->tail->next = novo;
		l->tail = novo;
	}
}
void mostraLista(Lista *l){
	if((l->head != NULL)&& (l->tail != NULL)){
		No *aux = l->head;
		while(aux){
			printf("%d\n", aux->data);
			aux = aux->next;
		}
	}
	else printf("Nao ha nada para mostrar.\n");
}


Lista* separaLista(Lista *l, int n){
	if((l->head != NULL) && (l->tail != NULL)){
		No *aux = l->head;
		for(int i = 1; (aux!=NULL) && (i<n); i++, aux=aux->next);
		if(aux){
			Lista *listaNova = NULL;
			listaNova = criaLista(listaNova);
			listaNova->head = aux;
			listaNova->tail = l->tail;
			l->tail = aux->ant;
			if(l->tail) l->tail->next =	NULL;
			listaNova->head->ant = NULL;
			return listaNova;
		}
		else return NULL;
	}
	else return NULL;
}

Lista* concatenar(Lista *l, Lista *lista2){	
	No *aux = l->tail;
	aux->next = lista2->head;
	lista2->head->ant = aux;
	aux = lista2->tail;
	return l;
}

Lista* dadosListas(Lista *l){
	int m = 0, quantidade = 0;
	l = criaLista(l);
	printf("Deseja criar quantos elementos na lista?");
	scanf("%d", &quantidade);
	for(int i=0; i<quantidade; i++){
		printf("Digite a infomacao do elemento %d: ", i+1);
		scanf("%d", &m);
		insereFinal(l, m);
	}
	puts("");
	return l;
}
int main(){
	int m=0;
	Lista *lista1 = NULL, *lista2 = NULL, *listaNova = NULL;
	lista1 = dadosListas(lista1);
	lista2 = dadosListas(lista2);
	puts("Dados lista 1:");
	mostraLista(lista1);
	puts("Dados lista 2:");
	mostraLista(lista2);
	lista1 = concatenar(lista1, lista2);
	printf("");
	puts("Lista concatenada: ");
	mostraLista(lista1);
	scanf("%d", &m);
	listaNova = separaLista(lista1, m);
	mostraLista(listaNova);
	return 0;
}
