#include <stdio.h>
#include <stdlib.h>
typedef struct no{
	int n;
	struct no *prox;
}no;

typedef struct listaCircular{
	no *head;
	no *tail;
}listaCircular;


listaCircular* criaListaC(listaCircular *l){
	l = (listaCircular *) malloc(sizeof(listaCircular));
	l->head = NULL;
	return l;
}
no* aloca(no *nodo){
	nodo = (no *) malloc(sizeof(no));
	return nodo; 
} 

void mostra(listaCircular *l){
	if(l){
		no *aux = NULL;
		aux = l->head;
		do{
			printf("%d\n", aux->n);
			aux = aux->prox;
		}while(aux != l->head);
	}
	else printf("Lista vazia!\n");
}
int contaNodo(listaCircular *l){
	int contador = 0; 
	if(l){
		no *aux = NULL;
		aux = l->head;
		do{
			contador +=1;
			aux =aux->prox;
		}while(aux != l->head);
	}
	return contador;
}

listaCircular* insereEsquerda(listaCircular *l, int n){
	if(l){
		no *novo = NULL;
		novo = (no *) malloc(sizeof(no));
		if(novo){
			no *aux = NULL;
			aux = l->head;
			do{
				printf("oooo");
				aux = aux->prox;
			}while(aux->prox !=l ->head);
			novo->n = n;
			novo->prox = l->head;
			aux->prox = novo;
			return l;
		}
		else return NULL;
	}else return NULL; 
}

listaCircular* concatenaListaC(listaCircular *lista1, listaCircular *lista2){
	if(lista1 && lista2){
		no *aux1 = NULL, *aux2 = NULL;
		aux1 = lista1->head;
		aux2 = lista2->head;
		do{
			aux1 = aux1->prox;
		}while(aux1->prox != lista1->head);
		
		do{
			printf("%d", aux2->n);
			aux2 = aux2->prox;
		}while(aux2->prox != lista2->head);
		aux1->prox = lista2->head;
		aux2->prox = lista1->head;
		return lista1;
	}
	else return NULL;
}

listaCircular* copiaLista(listaCircular *lista1){
	if(lista1){
		listaCircular *list=NULL;
		no *aux = lista1->head;
		list = (listaCircular *) malloc(sizeof(listaCircular));
		list->head = NULL;
		do{
			no *novo = (no *)malloc(sizeof(no));
			novo->n = aux->n;
			if(list->head==NULL){
				list->head = novo;
				novo->prox = novo;
				list->tail = novo;
			}
			else{
				novo->prox = list->head;
				list->tail->prox = novo;
				list->tail = novo;
			}
			aux = aux->prox;
		}while(aux!=lista1->head);
		return list;
	}
	return NULL;
}
int main(){
	int numeroNo, m=678;
	int numeroNo2;
	no *no1=NULL, *no2=NULL, *no3=NULL, *no4=NULL;
	no *nodo1=NULL, *nodo2=NULL, *nodo3=NULL;
	listaCircular *lista1 = NULL;//lista 1;
	listaCircular *lista2 = NULL;//lista 2;
	lista1 = criaListaC(lista1);
	lista2 = criaListaC(lista2);
	no1 = aloca(no1);//aloca memoria lista 1;
	no2 = aloca(no2);
	no3 = aloca(no3);
	no4 = aloca(no4);
	
	nodo1 = aloca(nodo1);//aloca memoia lista 2;
	nodo2 = aloca(nodo2);
	nodo3 = aloca(nodo3);
	
	no1->prox = no2;//linca os nodos lista 1;
	no2->prox = no3;
	no3->prox = no4;
	no4->prox = no1;
	
	nodo1->prox = nodo2;//linca os nodos lista 2;
	nodo2->prox = nodo3;
	nodo3->prox = nodo1;
	
	lista1->head = no1;//cabeca da L1;
	lista2->head = nodo1;//cabeca da L2;
	lista1->tail = no4;
	no1->n = 1;
	no2->n = 2;		
	no3->n = 3;
	no4->n = 4;
	//puts("lista 1:");
	//mostra(lista1);
	//numeroNo = contaNodo(lista1);
	//printf("Numero de no na lista 1 sao: %d\n", numeroNo);
	//puts("");
	nodo1->n = 70;
	nodo2->n = 60;
	nodo3->n = 90;
	//puts("lista 2:");
	//mostra(lista2);
	//numeroNo2 = contaNodo(lista2);
	//printf("Numero de no na lista 2 sao: %d", numeroNo2);
	//lista1 = concatenaListaC(lista1, lista2);
	//puts("");
	//puts("Lista concatenada: ");
	//mostra(lista1);
	//lista1 = insereEsquerda(lista1, m);
	//mostra(lista1);
	//numeroNo = contaNodo(lista1);
	//printf("Numero de no na lista sao: %d\n", numeroNo);
	
	//char ola[100];
	//gets(ola);
	//printf("%s\n",ola);
	listaCircular *copia = NULL;
	copia = copiaLista(lista1);
	
	puts("");
	mostra(lista1);
	puts("BAIXO:");
	mostra(copia);
	
	return 0;
}
