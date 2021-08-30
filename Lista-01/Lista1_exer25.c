#include <stdio.h>
#include <stdlib.h>
void main(){
	int QA,QB;
	float valorA, valorB, calculo;
	printf("Quantidade de produto A:");
	scanf("%d",&QA);
	printf("Quantidade de produto B:");
	scanf("%d",&QB);
	printf("Valor unitario do produto A:");
	scanf("%f",&valorA);
	printf("Valor unitario do produto B:");
	scanf("%f",&valorB);
	calculo =  (QA*valorA)+(QB*valorB);
	printf("Total: R$%.2f\n",calculo);
	system("pause");
}
