#include <stdio.h>
#include <stdlib.h>
typedef struct no{
	int info;
	struct no *prox;
}no;

typedef struct pilha{
	no *head;
}pilha;

pilha* empilha(pilha *p){
	if(p){
		no *novo = NULL;
			novo = (no*) malloc(sizeof(no));
			novo->info = 1;
		if(p->head = NULL){
			p->head = novo;
			
			novo->prox = NULL;
		}
		else{
			novo->prox = p->head;
			p->head = novo;
		}
		return p;
	}
}

pilha* empilhaAux(no *no){
	pilha *nova = (pilha *) malloc(sizeof(pilha));
	nova->head = NULL;
	if(nova->head == NULL){
		nova->head = no;
		no->prox = NULL;
	}
	else{
		no->prox = nova->head;
		nova->head = no;
	}
	return nova;
}

pilha* desempilhaAux(pilha *aux, pilha *atual){
	if(aux){
		no *auxilia = NULL;
		while(aux->head){
			auxilia = aux->head;
			if(atual->head==NULL){
				atual->head = aux->head;
				atual->head->prox = NULL;
				aux->head = auxilia->prox;
			}
			else{
				aux->head = auxilia->prox;
				auxilia->prox = atual->head;
				atual->head = auxilia;
			}
		}
	}
	return atual;
}
pilha* desempilha(pilha *p, int chave){
	if(p){
		if(p->head){
			pilha *pilhaAux = NULL;
			no *aux = NULL;
			printf("%d\n", p->head!=NULL);
			printf("%d\n", p->head->info != chave );
			printf("%d\n", p->head->info);
			while((p->head!=NULL) && (p->head->info == chave)){
				aux = p->head;
				printf("ola\n");
				pilhaAux = empilhaAux(p->head);
				printf("%d===\n", p->head->info);
				p->head = aux->prox;
			}
			if(p->head->info == chave){
				aux = p->head;
				p->head = aux->prox;
				free(aux);
				p = desempilhaAux(pilhaAux, p);
			}
			else if(p->head==NULL){
				p = desempilhaAux(pilhaAux, p);
			}
			
			return p;
		}
	}
}
int main(){
	pilha *pilha1 = NULL;
	pilha1 = (pilha*) malloc(sizeof(pilha));
	pilha1->head = NULL;
	pilha1 = empilha(pilha1);
	pilha1 = empilha(pilha1);
	pilha1 = empilha(pilha1);
	//printf("%d\n",pilha1->head->info);
	pilha1= desempilha(pilha1, 2);
	printf("%d", pilha1->head->info);
	return 0; 
}
