#include <stdio.h>
#include <stdlib.h>
void main(){
	int aula;
	float hora, p, salL;
	printf("Valor da hora aula:");
	scanf("%f",&hora);
	printf("Numeros de aula/mes:");
	scanf("%d",&aula);
	printf("Percentual de desconto:");
	scanf("%f",&p);
	salL = (hora*aula)-(p*(hora*aula))/100;
	printf("Salario liquido: R$%.2f\n",salL);
	system("pause");
}
