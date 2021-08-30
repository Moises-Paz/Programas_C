#include <stdio.h>
#include <stdlib.h>
int main(void){
	int numeros[3], maior = 0;
	printf("Digite 4 numeros: ");
	scanf("%d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3]);
	printf("Os tres menores numeros sao:\n");
	for(int x=0; x<4; x++) //Verifica qual numero eh o maior.
	{
		if(numeros[x] > maior)
		{
			maior = numeros[x];		
		}
	}
	for(int z=0; z<4; z++) //Printa todos os numeros menos o maior.
	{
		if(numeros[z] != maior)
		{
			printf("%d\n",numeros[z]);
		}
	}
	system("pause");
	return 0;
}
