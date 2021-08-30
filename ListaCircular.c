#include <stdio.h>
#include <stdlib.h>
typedef struct ListaC{
	int n;
	struct ListaC *prox;
}ListaC;

void mostra(ListaC *l){
	if(l){
		ListaC *aux = l;
		while(1){
			printf("ola: %d\n", aux->n);
			aux = aux->prox;
			if(aux->prox == l) break;
		}
	}
	else printf("nao ha nada para mostrar.\n");
}
ListaC* criaC(int n){
	ListaC *novo = NULL;
	novo = (ListaC *) malloc(sizeof(ListaC));
	novo->n = n;
	novo->prox = novo;
	return novo;
}

ListaC* insere(ListaC *l, int n){
	if(l){
		ListaC *novo = NULL;
		novo = (ListaC *) malloc(sizeof(ListaC));
		novo->n = n;
		novo->prox = l->prox;
		l->prox = novo;
		return l;	
	}
	else return l = criaC(n);		
}
int main(){
	ListaC *circular = NULL;
	int m=5;
	circular = insere(circular, m);
	mostra(circular);
	return 0;
}
