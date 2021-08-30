#include <stdio.h>
#include <stdlib.h>
int main(){
	int vetor[19];
	//O usuario informa 20 valores para o vetor;
	printf("Digite 20 numeros(com alguns sendo negativo): ");
	for(int x=0; x<20; x++)
	{
		scanf("%d",&vetor[x]);
	}
	//verifica se tem numeros negativos e troca por 0 se tiver;
	for(int m=0; m<20; m++)
	{
		if(vetor[m]<0)
		{
			vetor[m] = 0;
		}
	}	
	//Imprime os valores contidos no vetor;
	printf("Vetor = ");
	for(int x=0; x<20; x++)
	{
		printf("%d  ",vetor[x]);
	}	
	system("pause");
	return 0;
}
