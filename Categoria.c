#include <stdio.h>
#include <stdlib.h>
void main(){
	int idade;
	idade = 1;
	while(idade!=0){
		printf("Infome a idade:");
		scanf("%d",&idade);
		if(idade>=5 && idade <=7){
			printf("Categoria Infantil A\n");
		}else if(idade>=8 && idade <=10){
				printf("Categoria Infantil B\n");
		}else if(idade>=11 && idade <=13){
				printf("Categoria Juvenil A\n");
		}else if(idade>=14 && idade <=17){
				printf("Categoria Juvenil B\n");
		}else if(idade>=18){
				printf("Categoria Senior\n");
		}else{
				printf("Sem categoria.\n");
		}
		system("pause");
		system("cls");
	}
	
}
