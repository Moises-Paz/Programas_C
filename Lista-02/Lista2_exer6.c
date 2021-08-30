#include <stdio.h>
#include <stdlib.h>
void main(){
	float produto, calculo;
	printf("Produto:");
	scanf("%f",&produto);
	if(produto < 20){
		calculo = produto + ((produto * 45)/100);
		printf("O produto eh menor que 20 entao aplicando 45%% fica = R$%f\n",calculo);
	}else {
		calculo = produto + ((produto * 30)/100);
		printf("O produto eh maio ou igual a 20 entao aplicando 30%% fica = R$%f\n",calculo);
	}
	system("pause");
}
