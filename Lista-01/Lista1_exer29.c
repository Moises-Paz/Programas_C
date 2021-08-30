#include <stdio.h>
#include <stdlib.h>
void main(){
	int idade, calculo;
	printf("Idade:");
	scanf("%d",&idade);
	calculo = idade * 365;
	printf("Idade em dias: %d\n",calculo);
	system("pause");
}
