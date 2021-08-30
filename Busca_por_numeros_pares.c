#include <stdio.h>
#include <stdlib.h>
int main(){
	int vetor[19], soma =0, resto;
	printf("Digite 20 numeros aleatoriamente: ");
	for(int m=0; m<20; m++)
	{
		scanf("%d",&vetor[m]);
	}
	system("cls");
	printf("Os numeros pares presente no vetor sao:\n");
	for(int x=0; x<20; x++)
	{
		resto = vetor[x] % 2;
		if(resto==0)
		{
			soma = soma +1;
			printf("%d\n",vetor[x]);
		}
	}
	printf("\n\nO vetor possui %d numeros pares.\n\n",soma);
	system("pause");
	return 0;
}
