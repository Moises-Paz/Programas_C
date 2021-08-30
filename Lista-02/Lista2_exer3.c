#include <stdio.h>
#include <stdlib.h>
void main(){
	int idade;
	printf("Informe sua idade:");
	scanf("%d",&idade);
	if(idade<18){
		printf("Voce eh menor de idade\n");
	}else{
		printf("Voce eh maior de idade\n");
	}
	system("pause");
}
