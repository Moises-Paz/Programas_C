#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
int sequencial(int *vetor, int *outroVetor, int tamanho, int chave)
{
	int n=0;
	for(int x=0; x<tamanho; x++)
	{
		if(vetor[x]==chave)
		{
			outroVetor[n] = x;
			n++;
		}
	}
	if(n>0)
	{
		return n;
	}
	else
	{
		return -1;
	}
}
int main(){
	int chave, numero;
	printf("Deseja criar um vetor de quantas posicoes?");
	scanf("%d", &numero);
	int vetor[numero];
	printf("Preencha o vetor: ");
	for(int x=0; x<numero; x++)
	{
		scanf("%d", &vetor[x]);
	}
	printf("Informe qual numero deseja procurar: ");
	scanf("%d", &chave);
	int outroVetor[numero];
	int retorno = sequencial(vetor, outroVetor, numero, chave);
	if(retorno>0)
	{
		printf("Numero de Ocorrencia: %d\n", retorno);
		printf("\nPOSICOES:\n");
		for(int x=0; x<retorno; x++)
		{
			printf("%d   ", outroVetor[x]);
		}
	}
	else
	{
		printf("Busca nao encontrada!");
	}
	return 0;
}
