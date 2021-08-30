#include <stdio.h>
#include <stdlib.h>
typedef struct no{
	int data;
	struct no *prox;
	struct no *ant;
}no;

typedef struct listaCircular{
	no *head;
}listaCircular;


listaCircular* criaListaCircular(listaCircular *l){
	l = (listaCircular *) malloc(sizeof(listaCircular));
	l->head = NULL;
	return l;
}

listaCircular* insereNaCabeca(listaCircular *l, int n){
	if(!l) l = criaListaCircular(l);
	no *novo = NULL;
	novo = (no *) malloc(sizeof(no));
	novo->data = n;
	if(l->head == NULL){
		l->head = novo;
		novo->prox = l->head;
		novo->ant = l->head;
	}
	else{
		if(l->head->prox == l->head){
			novo->ant = l->head;
			novo->prox = l->head;
			l->head->prox = novo;
			l->head->ant = novo;
		}
		else{
			novo->prox =  l->head->prox;
			novo->ant = l->head;
			l->head->prox->ant = novo;
			l->head->prox = novo;
		}	
	}
	return l;
}

void printLista(listaCircular *l){
	if(l){
		no *aux = l->head;
		do{
			printf("%d\n", aux->data);
			aux = aux->prox;
		}while(aux != l->head);
	}
	else printf("Lista vazia.");
}

no* busca(listaCircular *l, int busca){
	if(l){
		no *aux = NULL;
		aux = l->head;
		while((aux->data != busca)){
			aux = aux->prox;
			if(aux == l->head) return NULL;
		}
		return aux;
	}
	else return NULL;
}

listaCircular* eliminaLista(listaCircular *l){
	if(l){
		no *aux = NULL;
		while(aux){
			aux = l->head->prox;
			l->head->prox = aux->prox;
			aux->prox->ant = l->head;
			free(aux);
			aux = l->head;
		}
		free(l);
		l = NULL;
		printf("tudo liberado!\n");
	}
	else free(l);
	return l;
}
int main(){
	int numero = 0, info1 = 3, info2 = 156, info3 = 100, info4 = 14, info5 = 0;
	listaCircular *listaC = NULL;
	no *encontrado = NULL; //para receber o no da busca;
	listaC = criaListaCircular(listaC);
	listaC = insereNaCabeca(listaC, info1);
	listaC = insereNaCabeca(listaC, info2);
	listaC = insereNaCabeca(listaC, info3);
	listaC = insereNaCabeca(listaC, info4);
	listaC = insereNaCabeca(listaC, info5);
	printLista(listaC);
	printf("Deseja buscar qual numero: ");
	scanf("%d", &numero);
	encontrado = busca(listaC, numero);
	if(encontrado ==NULL){
		printf("Busca nao encontrada!\n");
	}
	else printf("Numero %d encontrado na lista.\n", encontrado->data);
	listaC = eliminaLista(listaC);
	
	printLista(listaC);
	return 0;
}
