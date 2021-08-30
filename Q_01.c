#include <stdio.h>
#include <stdlib.h>
typedef struct Lista{
    int info;
    struct Lista *prox;
    struct Lista *ant;
}Lista;


Lista* destroiNo(Lista *l){
	if(l){
		if(l->prox!=NULL){
			Lista *aux = NULL;
			aux = l;
			l = aux->prox;
			free(aux);
			l->ant = NULL;
			aux = NULL;
			
		}
		else{
			free(l);
			l = NULL;
		}
		return l;		
	}
	else return NULL;
}
Lista* criaLista(int n){
	Lista *novo =NULL;
	novo = (Lista*) malloc(sizeof(Lista));
	novo->ant = NULL;
	novo->prox = NULL;
	novo->info = n;
	return novo;
}

Lista* insereComeco(Lista *l, int n){
	if(l){
		Lista *novo = NULL;
		novo = (Lista *) malloc(sizeof(Lista));
		novo->info = n;
		novo->ant = NULL;
		novo->prox = l;
		l->ant = novo;
		return novo;
	}
	else{
		l = criaLista(n);
		return l;
	}
}

int numeroNo(Lista *l){
	Lista *aux = l;
	int cont = 0;
	while(aux){
        aux = aux->prox;
        cont += 1;
    }
	return cont;	
}
void mostrar(Lista *l){
	if(l){
		while(l){
			printf("info: %d\n", l->info);
			l = l->prox;
		}
	}
	else printf("Nao ha nada para mostrar.\n");
}
int main(){
	int n, cria;
	Lista *lista1 = NULL;
	printf("Deseja criar quantas listas?");
	scanf("%d", &cria);
	for(int i=0; i<cria; i++){
		printf("Digite o valor de n: ");
		scanf("%d", &n);
		lista1 = insereComeco(lista1, n);
	}
	mostrar(lista1);
	lista1 = destroiNo(lista1);
	lista1 = destroiNo(lista1);
	lista1 = destroiNo(lista1);
	lista1 = destroiNo(lista1);
	puts("==============");
	mostrar(lista1);
	return 0;
}
