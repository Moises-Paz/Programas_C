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

arv* criaNo(int valor){
	arv *novo = (arv*) malloc(sizeof(arv));
	if(novo){
		novo->info = valor;
		novo->esq = NULL;
		novo->dir = NULL;
		return novo;
	}else return NULL;
	
}

void mostra(arv *raiz, int nivel){
	if(raiz){
		printf("%d, nivel %d\n", raiz->info, nivel);
		mostra(raiz->esq, nivel + 1);
		mostra(raiz->dir, nivel + 1);
	}
}

arv* insereNo(arv *raiz, int valor){
	if(raiz){
		if(valor < raiz->info) raiz->esq = insereNo(raiz->esq, valor);
		else raiz->dir = insereNo(raiz->dir, valor);
	}
	else return criaNo(valor);
}

int contaNo(arv *raiz){
	if(raiz){
		return 1 + contaNo(raiz->esq) + contaNo(raiz->dir);
	}
	else return 0;
}

void busca(arv *raiz, int chave){
	if(raiz){
		if(raiz->info == chave) puts("Chave encontrada");
		else{
			if(chave < raiz->info) busca(raiz->esq, chave);
			else busca(raiz->dir, chave);
		} 
	}else puts("Chave nao encontrada!");
}

arv* buscaNo(arv *raiz, int chave){
	if(raiz){
		if(raiz->info == chave) return raiz;
		else{
			if(chave < raiz->info) return buscaNo(raiz->esq, chave);
			else return buscaNo(raiz->dir, chave);	
		}
	}
}

arv* buscaPaiNo(arv **pai, arv *raiz, int chave){
	if(raiz){
		if(raiz->info == chave) return raiz;
		else{
			*pai = raiz;
			if(chave < raiz->info) return buscaPaiNo(&*pai, raiz->esq, chave);
			else return buscaPaiNo(&*pai, raiz->dir, chave);
		}
	}else return NULL;
}

arv* retiraNo(arv *raiz, int chave){
	arv *pai = NULL, *no, *p, *q;
	no = buscaPaiNo(&pai, raiz, chave);
	
}
int main(){
	arv *raiz = inicializa();
	raiz = insereNo(raiz, 5);
	raiz = insereNo(raiz, 4);
	raiz = insereNo(raiz, 10);
	raiz = insereNo(raiz, 1);
	raiz = insereNo(raiz, 3);	
	mostra(raiz, 0);
	busca(raiz, 5);
	int contador = contaNo(raiz);
	printf("numero de No = %d\n", contador);
	arv *ola = buscaNo(raiz, 5);
	printf("ola = %d\n", ola->info);
	return 0;
}
