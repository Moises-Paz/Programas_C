#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void countingSort(int *vetor, int tam)
{
	int vetorAux[MAX];
	int x, y, z;
	for(x=0; x < MAX; x++)
	{
		vetorAux[x] = 0;
	}
	for(x=0; x<tam; x++)
	{
		vetorAux[vetor[x]]++;
	}
	for(x=0, y=0; y<MAX; y++)
	{
		for(z=vetorAux[y]; z>0; z--)
		{
			vetor[x++] = y;
		}
	}
}
int main(){
	int tam, *vetor=NULL;
	printf("Informe o tamanho do vetor: [O 'zero' esta incluso]");
	scanf("%d", &tam);
	vetor = (int *) malloc(sizeof(int)*tam);
	printf("Informe os valores do vetor: \n");
	for(int x=0; x<tam; x++)
	{
		printf("Posicao %d: ", x);
		scanf("%d ", &vetor[x]);
		printf("Ola\n");
	}
	
	countingSort(vetor, tam);
	for(int x=0; x<tam; x++)
	{
		printf("%d ", vetor[x]);
	}
	free(vetor);
	vetor = NULL;
	return 0;
}
