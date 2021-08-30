#include <stdio.h>
int buscaBinaria(int *vetor, int tamanho, int *outroVetor, int busca)
{
	int inicio = 0, fim = tamanho-1, cont = 0;
	while(inicio<=fim)
	{
		int meio = (inicio+fim)/2;     
		if(vetor[meio] == busca)
		{
			outroVetor[cont] = meio;
			cont++;
			for(int x=meio-1; x>=inicio ; x--)
			{
				if(vetor[meio]==vetor[x])
				{
					outroVetor[cont] = x;
					cont++;	
				}	
			}
			for(int j=meio+1; j<=fim; j++)
			{
				if(vetor[meio]==vetor[j])
				{
					outroVetor[cont]=j;
					cont++;
				}
			}
          break;
		}
      	else if(vetor[meio]>busca)
        {
          fim = meio - 1;
        }
      	else if(vetor[meio]<busca)
        {
          inicio = meio + 1;
        }
	}
	if(cont > 0)
	{
		return cont;
	}
	else
	{
		return -1;
	}
}
void ordena( int *vetor, int tamanho)
{
    int menor=0;
    for(int x=1; x<tamanho; x++)
    {
    	if(vetor[menor]>vetor[x])
        {
          menor = x;
        }
    }
    int aux = vetor[0];
    vetor[0] = vetor[menor];
    vetor[menor] = aux;
	if(tamanho != 1)
    {
    	ordena(&vetor[1], tamanho-1);
    }
}

int main(){
	int tamanho, busca;
	printf("Informe o tamanho do vertor: ");
	scanf("%d", &tamanho);
	int vetor[tamanho], outroVetor[tamanho]; //Declaracoes de vetores;
	printf("INFORME OS VALORES [EM ORDEM]:\n");
	for(int x=0; x<tamanho; x++)
	{
		scanf("%d", &vetor[x]);
	}
	ordena(vetor, tamanho);
	printf("Deseja Buscar qual valor?");
	scanf("%d", &busca);
	int c = buscaBinaria(vetor, tamanho, outroVetor, busca);
	if(c>0)
	{
		printf("Numero de Ocorrencia: %d\n", c);
		printf("POSICOES: \n");
		ordena(outroVetor, c);
		for(int p=0; p<c; p++)
		{
			printf("%d ", outroVetor[p]);
		}
	}
	else
	{
		printf("Busca nao encontrada.");
	}
	return 0;
}
