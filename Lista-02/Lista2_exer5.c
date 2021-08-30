#include <stdio.h>
#include <stdlib.h>
void main(){
	int numero;
	printf("Informe o numero:");
	scanf("%d",&numero);
	if(numero >= 1 && numero <= 25){
		printf("O numero %d pertence ao seguinte intervalo: 1 a 25\n",numero);
	}else if(numero >= 26 && numero <= 50){
			printf("O numero %d pertence ao seguinte intervalo: 26 a 50\n",numero);
	}else if(numero >= 51 && numero <= 75){
			printf("O numero %d pertence ao seguinte intervalo: 51 a 75\n",numero);
	}else if(numero >= 76 && numero <= 100){
			printf("O numero %d pertence ao seguinte intervalo: 75 a 100\n",numero);
	}else {
		printf("O numero %d nao pertence a nenhum intervalo.\n",numero);
	}
	system("pause");
}
