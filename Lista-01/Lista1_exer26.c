#include <stdio.h>
#include <stdlib.h>
void main(){
	float sal,vendas, calculo;
	char nome[20];
	printf("Informe seu nome:");
	scanf("%s",nome);
	printf("Salario fixo:");
	scanf("%f",&sal);
	printf("Total de vendas/mes:");
	scanf("%f",&vendas);
	calculo = (vendas + (vendas*15)/100)+sal;
	printf("Total de vendas do %s: R$%.2f\n",nome, calculo);
	system("pause");
	
}
