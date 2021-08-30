#include <stdio.h>
#include <stdlib.h>
void main(){
	int m;
	float c, j, F;
	printf("Informe o capital c:");
	scanf("%f",&c);
	printf("Taxa de juros mensal j:");
	scanf("%f",&j);
	printf("periodo de aplicacoa m:");
	scanf("%d",&m);
	F = c*(1+j/100)*m;
	printf("Montante arrecadado no final do periodo: R$%.2f\n",F); 
	system("pause");
	
}
