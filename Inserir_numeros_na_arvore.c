#include <stdio.h>
#include <stdlib.h>
typedef struct no{
	int info;
	struct no *esq;
	struct no *dir;
}arv;

arv* inicializa(void){
	return NULL;
}

arv* criaNo(int chave){
	arv *novo = (arv*) malloc(sizeof(arv));
	if(novo){
		novo->info = chave;
		novo->esq = NULL;
		novo->dir = NULL;
	}return novo;
}

void insere(arv **raiz, int chave){
	if(*raiz){
		if(chave < (*raiz)->info) insere(&(*raiz)->esq, chave);
		else insere(&(*raiz)->dir, chave);
	}else *raiz = criaNo(chave);
}
void mostra(arv *raiz){
	if(raiz){
		mostra(raiz->dir);
		printf("%d\n", raiz->info);
		mostra(raiz->esq);
	}
}

int main(){
	int n, chaveN;
	arv *raiz = inicializa();
	printf("Deseja inserir quantos numeros na arvore: ");
	scanf("%d", &n);
	puts("Insira:");
	for(int i = 0; i<n; i++){
		scanf("%d", &chaveN);
		insere(&raiz, chaveN);
	}
	puts("Em ordem decrescente: ");
	mostra(raiz);
	return 0;
}
