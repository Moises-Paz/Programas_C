#include <stdio.h>
#include <stdlib.h>
void main(){
	float salario, percentual, calculo, valorAumento;
	printf("Informe o salario:");
	scanf("%f",&salario);
	printf("Percentual de aumento:");
	scanf("%f",&percentual);
	calculo = (salario*percentual)/100;
	valorAumento = salario + calculo;
	printf("Valor do aumento: R$%.2f\n",calculo);
	printf("Novo salario: R$%.2f\n",valorAumento);
	system("pause");
}
