#include <stdio.h>
#include <stdlib.h>
int main(){
	int numeroDeLinhasA, numeroDeLinhasB, numeroDeColunasA, numeroDeColunasB;
	printf("\t\t\t\t=====Matriz 'A'=====\n");
	printf("Informe o numero de linhas que essa matriz tem: ");
	scanf("%d", &numeroDeLinhasA);
	printf("E o numero de colunas: ");
	scanf("%d", &numeroDeColunasA);
	int matrizA[numeroDeLinhasA][numeroDeColunasA]; //Declaraçao da matriz com o tamanho de linhas e colunas informadas pelo usuario;
	printf("			=====INFORME OS VALORES DA MATRIZ 'A'=====\n");
	printf("LINHA		COLUNA		VALOR\n");
	for(int x=0; x<numeroDeLinhasA; x++)
	{
		for(int y=0; y<numeroDeColunasA; y++)
		{
			printf("  %d		  %d		  ", x+1, y+1);
			scanf("%d", &matrizA[x][y]);
		}
	}
	printf("\n				=====Matriz 'B'=====\n");
	printf("Informe o numero de linhas que essa matriz tem: ");
	scanf("%d", &numeroDeLinhasB);
	printf("A gora informe o numero de colunas: ");
	scanf("%d", &numeroDeColunasB);
	int matrizB[numeroDeLinhasB][numeroDeColunasB]; //Declaraçao da matriz com o tamanho de linhas e colunas informadas pelo usuario;
	printf("			=====INFORME OS VALORES DA MATRIZ 'B'=====\n");
	printf("LINHA		COLUNA		VALOR\n");
	for(int x=0; x<numeroDeLinhasB; x++)
	{
		for(int y=0; y<numeroDeColunasB; y++)
		{
			printf("  %d		  %d		  ", x+1, y+1);
			scanf("%d", &matrizB[x][y]);
		}
	}
	if(numeroDeColunasA == numeroDeLinhasB)
	{
		int matrizResultado[numeroDeLinhasA][numeroDeColunasB];
		for(int m=0; m<numeroDeLinhasA; m++)
		{
			int k = 0;
			
			for(k = 0; k<numeroDeColunasB; k++)
			{
				int C = 0;
				int soma = 0;
				for(C = 0; C<numeroDeColunasA; C++)
				{
					soma = soma + (matrizA[m][C] * matrizB[C][k]);
				}
				puts("");
				matrizResultado[m][k] = soma;
			}
		}
		puts("");
		for(int m=0; m<numeroDeLinhasA; m++)
		{
			for(int n=0; n<numeroDeColunasA; n++)
			{
				printf("%d   ",matrizA[m][n]);
			}
			puts("");
		}
		puts("");
		for(int m=0; m<numeroDeLinhasB; m++)
		{
			for(int n=0; n<numeroDeColunasB; n++)
			{
				printf("%d   ",matrizB[m][n]);
			}
			puts("");
		}
		puts("");
		printf("Resposta: \n");
		for(int m=0; m<numeroDeLinhasA; m++)
		{
			for(int n=0; n<numeroDeColunasB; n++)
			{
				printf("%d   ",matrizResultado[m][n]);
			}
			puts("");
		}
	}
	else
	{
		printf("Matriz nao pode ser multiplicada\nMOTIVO: numero de colunas de A eh diferente do mumero de linhas de B.");
    }
	return 0;
}
