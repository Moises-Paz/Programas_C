#include <stdio.h>
#include <stdlib.h>
int main(){
	int matriz[5][5], contador = 0;
	//Pede do usuario os valores das linhas e colunas da matriz;
	for(int L=0; L<5; L++)
	{
		for(int C=0; C<5; C++)
		{
			printf("\nInforme um valor para a Linha %d Coluna %d = ", L+1, C+1);
			scanf(" %d",&matriz[L][C]);
		}	
	}
	//Verifica quantos numeros maiores que 10 a matriz tem;
	for(int L=0; L<5; L++)
	{
		for(int C=0; C<5; C++)
		{
			if(matriz[L][C]>10)
			{
				contador = contador + 1;
			}
		}	
	}
	//Mostra quantos numeros maiores que 10 tem a matriz;
	printf("\nPOSSUI %d NUMEROS MAIORES QUE 10(DEZ).\n",contador);
	system("pause");
	return 0;
}
