#include <stdio.h>
#include <stdlib.h>
typedef struct no{
	int info;
	struct no *esq;
	struct no *dir;
	int altura;
}arv;

arv* inicializa(void){
	return NULL;
}

arv* criaNo(int chave){
	arv *novo = (arv *) malloc(sizeof(arv));
	if(novo){
		novo->info = chave;
		novo->dir = NULL;
		novo->esq = NULL;
		novo->altura = 0;
	}return novo;
}

int max(int a, int b){
	if(a > b) return a;
	else return b;
}

int altura(arv *no){
	if(!no) return -1;
	else return no->altura;
}

arv* insere(arv *raiz, int chave){
	if(raiz){
		if(chave < raiz->info) raiz->esq = insere(raiz->esq, chave);
		else raiz->dir = insere(raiz->dir, chave);
		raiz->altura = max(altura(raiz->esq), altura(raiz->dir)) + 1;
		return raiz;
	}else return criaNo(chave);
}

int fator(arv *raiz){
    return (altura(raiz->esq) - altura(raiz->dir));
}

int verificaArvore(arv *raiz){
    if(fator(raiz) >= -1 && fator(raiz) <= 1){
        return 1;
    } 
    return 0;
}
void mostra(arv *raiz){
	if(raiz){
		mostra(raiz->esq);
		printf("%d\n", raiz->info);
		mostra(raiz->dir);
	}
}

int main(){
	//Cuidado na inserção. Insira primeiro a raiz e enseguida as demais chaves;
	int numero, info, v;
	arv *raiz = inicializa();
	printf("Deseja inserir quantas chaves na arvore?\n");
	scanf("%d", &numero);
	puts("Insira:");
	for(int i = 0; i< numero; i++){
		scanf("%d", &info);
		raiz = insere(raiz, info);
	}
	puts("RESULTADO: ");
	v = verificaArvore(raiz);
	if(v == 1) puts("A arvore eh AVL");
	else puts("A arvore nao eh AVL");
	return 0;
}
