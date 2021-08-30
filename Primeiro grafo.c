#include <stdio.h>
#include <stdlib.h>
typedef struct adjacencia{
	int vertice;
	int poso;
	struct adjacencia *prox;
}adjacencia;

typedef struct vertice{
	adjacencia *cab;
}vertice;

typedef struct grafo{
	int vertice;
	int arestas;
	vertice *adj;
}grafo;

grafo* criaGrafo(int vertices){
	grafo *novoG = (grafo*) malloc(sizeof(grafo));
	novoG->vertice = vertices;
	novoG->arestas = 0;
	novoG->adj = (vertice*) malloc(sizeof(vertice)*vertices);
	for(int i = 0; i<vertices; i++){
		novoG->adj[i].cab = NULL;
	}
	return novoG;
	 
}

adjacencia* criaAdj(int vertices, int peso){
	adjacencia *temp = (adjacencia*) malloc(sizeof(adjacencia));
	temp->vertice = vertices;
	temp->poso = peso;
	temp->prox = NULL;
	return temp; 
}
int main(){
	
	return 0;
}
