#include <stdio.h>
#include <stdlib.h>
typedef struct adjacencias{
	int vertice;
	int peso;
	struct adjacencias *prox;	
}ADJACENCIAS;

typedef struct vertices{
	ADJACENCIAS *head;
}VERTICES;

typedef struct grafo{
	int vertices;
	int arestas;
	VERTICES *vetor;
}GRAFO;


GRAFO* criaGrafo(int vertice){
	GRAFO *novoG = (GRAFO *) malloc(sizeof(GRAFO));
	if(novoG){
		novoG->vertices = vertice;
		novoG->arestas = 0;
		VERTICES *novoVetor = (VERTICES *) malloc(sizeof(VERTICES)*vertice);
		if(novoVetor){
			novoG->vetor =  novoVetor;
		}
		for(int i=0; i < vertice; i++){
			novoG->vetor[i].head = NULL;
		}
	}
	return novoG;
}
ADJACENCIAS* criaAdj(int peso, int vertice){  
	ADJACENCIAS *novoAdj = (ADJACENCIAS *) malloc(sizeof(ADJACENCIAS));
	if(novoAdj){
		novoAdj->peso = peso;
		novoAdj->vertice = vertice;
		novoAdj->prox = NULL;
	}
	return novoAdj;
}

int criaAresta(GRAFO *grafo, int inicial, int final, int peso){
	if(!grafo) return 0;
	if(final < 0 || final >= grafo->vertices) return 0;
	if(inicial < 0 || inicial >= grafo->vertices) return 0;
	ADJACENCIAS *noAdj = criaAdj(peso, final);
	noAdj->prox = grafo->vetor[inicial].head;
	grafo->vetor[inicial].head = noAdj;
	grafo->arestas++;
	return 1;
}

void imprimeGrafo(GRAFO *grafo){
	if(grafo){
		printf("N vertives: %d.      N arestas: %d.\n", grafo->vertices, grafo->arestas);
		for(int i=0; i < grafo->vertices; i++){
			printf("V %d: ", i);
			ADJACENCIAS *aux = grafo->vetor[i].head;
			while(aux){
				printf("v%d(%d)", aux->vertice, aux->peso);
				aux = aux->prox;
			}
			puts("");
		}
	}
}
int main(){
	GRAFO *grafo = criaGrafo(5);
	criaAresta(grafo, 0, 1, 2);
	criaAresta(grafo, 1, 2, 4);
	criaAresta(grafo, 2, 0, 12);
	criaAresta(grafo, 2, 4, 40);
	criaAresta(grafo, 3, 1, 3);
	criaAresta(grafo, 4, 3, 8);
	imprimeGrafo(grafo);
	return 0;
}
