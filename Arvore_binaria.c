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
		novo->altura = 0;
		novo->esq = NULL;
		novo->dir = NULL;
	}
	return novo;
}

void mostra(arv *raiz){
	if(raiz){
		printf("%d\n", raiz->info);
		mostra(raiz->esq);
		mostra(raiz->dir);
	}
}

int verificaBinaria(arv *raiz){
	if(raiz){
		int n1 =1, n2=1;
		if(raiz->esq){
			if((raiz->esq->info > raiz->info) || raiz->esq->info == raiz->info) return 0;
			else n1 =  verificaBinaria(raiz->esq);
		}
			
		if(raiz->dir){
			if(raiz->dir->info < raiz->info || raiz->dir->info == raiz->info) return 0;
			else n2 =  verificaBinaria(raiz->dir);
		}
		if(n1 == 0 || n2 ==0) return 0;
		else return 1;
	}
}

int main(){
	//Arvore Binaria de Busca;
	arv *no1=NULL, *no2= NULL, *no3=NULL, *no4=NULL, *no5=NULL, *no6=NULL;
	no1 = criaNo(10);
	no2 = criaNo(12);
	no3 = criaNo(8);
	no4 = criaNo(1);
	no5 = criaNo(9);
	no6 = criaNo(13);                   // Formato da arvore teste (Positivo);         
	arv *raiz = no1;//raiz da arvore 1 //     _____(10)____
	no1->esq = no3;                   // __(8)__   	   (12)___
	no1->dir = no2;                  // (1)   (9)             (13)
	no3->dir = no5;
	no3->esq = no4;
	no2->dir = no6;
	
	//Arvore com teste negativo;
	arv *nodo1=NULL, *nodo2=NULL,*nodo3=NULL,*nodo4=NULL,*nodo5=NULL,*nodo6=NULL;
	nodo1 = criaNo(10);
	nodo2 = criaNo(8);
	nodo3 = criaNo(15);
	nodo4 = criaNo(16);
	nodo5 = criaNo(13);						 // Formato da arvore teste (negativo);
	nodo6 = criaNo(14);						//	 ____(10)___
	arv *raiz2 = nodo1; //raiz da arvore 2;//  (8)___      (15)___
	nodo1->dir = nodo3;                   //     ___(13)         (16)  
	nodo1->esq = nodo2;                  //   (14)
	nodo2->dir = nodo5;
	nodo5->esq = nodo6;
	nodo3->dir = nodo4;
	
	int v = verificaBinaria(raiz); //coloque a raiz da arvore aqui;
	if(v ==1) puts("Sim, eh uma arvore binaria de busca!");
	else puts("Nao, nao eh uma arvore binaria de busca!");
	return 0;
}
