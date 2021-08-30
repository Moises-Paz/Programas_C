#include <stdio.h>
#include <stdlib.h>
void main(){
	float km,calculo;
	char tipo;
	printf("Informe o percurso em km:");
	scanf("%f",&km);
	printf("Tipo de carro:");
	scanf(" %c",&tipo);
	if(tipo == 'c'|| tipo == 'C'){
		calculo = km/12;
		printf("Consumo estimado de combustivel para o tipo %c = %fL\n",tipo,calculo);
	}else if(tipo == 'b'|| tipo == 'B'){
	    	calculo = km/12;
			printf("Consumo estimado de combustivel para o tipo %c = %fL\n",tipo,calculo);
	}else if(tipo == 'a'|| tipo == 'A'){
			calculo = km/12;
			printf("Consumo estimado de combustivel para o tipo %c = %fL\n",tipo,calculo);
	}else{
		printf("Tipo de carro nao encontrado.\n");
	}
	system("pause");
}
