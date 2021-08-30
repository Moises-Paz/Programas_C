#include <stdio.h>
#include <stdlib.h>
typedef struct no{
	int data;
	struct no *prox;
}no;

typedef struct pilha{
	no *head;
}pilha;

pilha* criaPilha(pilha *p){
	p = (pilha*) malloc(sizeof(pilha));
	p->head = NULL;
	return p;
}

void mostraPilha(pilha *p){
	if(p){
		if(p->head){
			no *aux = NULL;
			aux = p->head;
			while(aux){
				printf("info = %d\n", aux->data);
				aux = aux->prox;
			}
		}
		else puts("Nao ha nada para mostrar!");
		
	}else puts("Nao ha lista criada!");
}
pilha* empilhar(pilha *p, int info){
	if(p){
		no *novo = NULL;
		novo = (no *) malloc(sizeof(no));
		novo->data = info;
		if(p->head == NULL){
			p->head = novo;
			novo->prox = NULL;
		}
		else{
			novo->prox = p->head;
			p->head = novo;
		}
		return p;
	}
	else return NULL;
}

/*pilha* desempilhar(pilha *p){
	if(p){
		
	}else return NULL;
}*/
int main(){
	int informacao = 100, info = 10, n = 15;
	pilha *pilha1 = NULL;
	pilha1 = criaPilha(pilha1);
	pilha1 = empilhar(pilha1, informacao);
	pilha1 = empilhar(pilha1, info);
	pilha1 = empilhar(pilha1, n);
	mostraPilha(pilha1);
	
	return 0;
}
