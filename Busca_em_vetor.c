#include <stdio.h>
#include <stdlib.h>
int main(){
	int matriz[5], pesquisa;
	printf("Digite 5 numeros: ");
	for(int x=0; x<5; x++)
	{
		scanf("%d",&matriz[x]);
	}
	printf("Informe o valor que deseja saber se esta no vetor: ");
	scanf("%d",&pesquisa);
	for(int z=0; z<5; z++)
	{
		if(matriz[z]==pesquisa)
		{
			printf("Sim o valor %d esta no vetor.\n");
			break;
		}
	}
	system("pause");
	return 0;
}
