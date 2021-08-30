#include <stdio.h>
#include <stdlib.h>
typedef struct no{
	int info;
	struct no *primogenito;
	struct no *irmao;
}arv;

arv* criaNo(int valor){
	arv *novo = (arv *) malloc(sizeof(arv));
	novo->info = valor;
	novo->primogenito = NULL;
	novo->irmao = NULL;
	return novo;
}

arv* inicializa(int valor){
	return criaNo(valor);
}

arv* busca(int chave, arv* raiz){
	if(!raiz) return NULL;
	if(raiz->info == chave) return raiz;
	arv *auxP = raiz->primogenito;
	while(auxP){
		arv *resposta = busca(chave, auxP);
		if(resposta) return resposta;
		auxP = auxP->irmao;
	}
	return NULL;
}

int insere(arv *raiz, int valor, int chavePai){
	arv *pai = busca(chavePai, raiz);
	if(!pai) return 0;
	arv *no = criaNo(valor);
	arv *auxP = pai->primogenito;
	if(!auxP) pai->primogenito = no;
	else{
		while(auxP->irmao){
			auxP = auxP->irmao;
		}
		auxP->irmao = no;
	}
	return 1;
}

void mostra(arv *raiz){
	if(raiz != NULL){
		printf("%d\n", raiz->info);
		arv *auxP = raiz->primogenito;
		while(auxP){
			mostra(auxP);
			auxP = auxP->irmao;
		}
	}
}
int main(){
	arv *raiz = inicializa(3);
	insere(raiz, 10, 3);
	insere(raiz, 12, 3);
	insere(raiz, 0, 10);
	mostra(raiz);
	
	return 0;
}
