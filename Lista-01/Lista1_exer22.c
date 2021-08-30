#include <stdio.h>
#include <stdlib.h>
void main(){
	int tipo1,tipo2,tipo3;
	float tipo1V, tipo2V, tipo3V, total;
	printf("Tipo 1:");
	scanf("%d",&tipo1);
	printf("Tipo 2:");
	scanf("%d",&tipo2);
	printf("Tipo 3:");
	scanf("%d",&tipo3);
	system("cls");
	tipo1V =  tipo1 * 1.25;
	tipo2V =  tipo2 * 1.30;
	tipo3V =  tipo3 * 0.75;
	total =  tipo1V + tipo2V + tipo3V;
	printf("Total tipo1: R$%.2f\nTotal tipo2: R$%.2f\nTotal tipo3: R$%.2f\n\n",tipo1V,tipo2V,tipo3V);
	printf("Valor TOTAL: R$%.2f",total);
}
