#include <stdio.h>
#include <stdlib.h>
int main(){
	float valor, desconto;
	printf("Informe o valor do produto: ");
	scanf("%f", &valor);
	if(valor >= 165.50)
	{
		desconto = valor - ((valor * 10 )/100);
		printf("Total com desconto de 10%% = R$%f\n", desconto);
	}
	else
	{
		if(valor>=100)
		{
			desconto = valor - ((valor * 5)/100);
			printf("Total com desconto de 5%% = R$%f\n",desconto);
		}
	}
	system("pause");
	
	return 0;
}
