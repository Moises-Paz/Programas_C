#include <stdio.h>
#include <stdlib.h>
void main(){
	float mercadoria, desconto;
	printf("Valor da mercadoria:");
	scanf("%f",&mercadoria);
	desconto = mercadoria - ((mercadoria*20)/100);
	printf("Valor total com desconto: R$%.2f\n",desconto);
	system("pause");
}
