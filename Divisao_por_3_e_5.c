#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n, resto3, resto5;
	printf("Digite um numero para saber se eh divisivel por 5 e por 3: ");
	scanf("%d", &n);
	resto5 = n%5;
	resto3 = n%3;
	if(resto5 == 0 && resto3 == 0)
	{
		printf("O numero %d eh divisivel por 5 e por 3\n", n);
	}
	else
	{
		printf("O NUMERO NAO EH DIVISIVEL POR 3 E POR 5.\n");
	}
	system("pause");
	return 0;
}
