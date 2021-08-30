#include <stdio.h>
#include <stdlib.h>
void main(){
	int numero;
	printf("Informe um numero:");
	scanf("%d",&numero);
	if(numero == 1){
		printf("Janeiro\n");
   	}else if(numero == 2){
    	printf("Fevereiro\n");
	}else if(numero == 3){
			printf("Março\n");
	}else if(numero == 4){
			printf("Abril\n");
	}else if(numero == 5){
			printf("Maio\n");
	}else if(numero == 6){
			printf("Junho\n");
	}else if(numero == 7){
			printf("Julho\n");
	}else if(numero == 8){
			printf("Agosto\n");
	}else if(numero == 9){
			printf("Setembro\n");
	}else if(numero == 10){
			printf("Outubro\n");
	}else if(numero == 11){
			printf("Novembro\n");
	}else if(numero == 12){
			printf("Dezembro\n");
	}else {
		printf("O numero %d nao pertence ao intervalo de 1 ao 12\n",numero);
	}
	system("pause");
	}

