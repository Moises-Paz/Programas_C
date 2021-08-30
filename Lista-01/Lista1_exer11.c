#include <stdio.h>
#include <stdlib.h>
void main(){
	float saldo, reajuste;
	printf("Informe o saldo:");
	scanf("%f",&saldo);
	reajuste = saldo+((saldo*6.2)/100);
	printf("O novo saldo eh: R$%.2f\n",reajuste);
	system("pause");
}
