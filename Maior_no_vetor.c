#include <stdio.h>
#include <stdlib.h>
void encontraMaior(int *vetor, int tamanho)
{
	if(vetor[tamanho-1] > vetor[0])
	{
		
		int aux = vetor[0];
		vetor[0] = vetor[tamanho-1];
		vetor[tamanho-1] = aux;
	}
	
	if(tamanho > 1)
	{
		encontraMaior(vetor, tamanho-1);
	}
	
}
int main(){
	int n, *vetor = NULL;
	printf("Qual o tamanho do vetor? ")/
	scanf("%d", &n);
	vetor = (int *) malloc(sizeof(int)*n);
	printf("Coloque os valores no vetor: ");
	for(int x=0; x<n; x++)
	{
		scanf("%d", &vetor[x]);
	}
	encontraMaior(vetor, n);
	printf("Maior elemento eh = %d", vetor[0]);
	free(vetor);
	vetor= NULL;
	return 0;
}
