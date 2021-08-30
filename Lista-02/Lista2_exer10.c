#include <stdio.h>
#include <stdlib.h>
void main(){
	int idade;
	printf("Informe sua idade:");
	scanf("%d",&idade);
	if(idade>=5 && idade <=7){
		printf("Infatil A\ns");
	}else if(idade>=8 && idade <=10){
		printf("Infatil B\n");
	}else if(idade>=11 && idade <=13){
		printf("Juvenil A\n");
	}else if(idade>=14 && idade <=17){
		printf("Juvenil B\n");
	}else if(idade>=18){
		printf("Senior\n");
	}else {
		printf("Categoria nao encontrada.\n");
	}
	system("pause");
}
