#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n, resto, soma = 0;
	printf("Digite um numero para saber se eh primo: ");
	scanf("%d",&n);
	for(int x = 1; x<=n; x++)
	{
		resto = n % x;
		if(resto == 0)
		{
			soma = soma + 1;
		}
	}
	if(soma == 2)
	{
		printf("O numero %d eh PRIMO.\n", n);
	}
	else
	{
		printf("O numero %d NAO EH PRIMO.\n", n);
	}
	system("pause");
	return 0;
}
