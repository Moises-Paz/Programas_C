#include <stdio.h>
#include <stdlib.h>
struct lista{//estrutura
		int info;
		struct lista *proximaEstrutura;
	};
	typedef struct lista l;
	
	l* inicializa(){//CRIA LISTA
		return NULL;
	}
	
	l* insere(l *sol, int i){
		l *novo;
		novo = (l*) malloc(sizeof(l));
		(*novo).info = i;
		(*novo).proximaEstrutura = sol;
		return novo;
	}
int main(){
	
	l *k;
	k = inicializa();
	k = insere(k, 23);
	k = insere(k, 10);
	
	
	return 0;
}
