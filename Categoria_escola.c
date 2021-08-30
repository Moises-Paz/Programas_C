#include <stdio.h>
#include <stdlib.h>
void main(){
	int escola, idade;
	char sexo;
	idade = 4;
	while(idade>0){
		printf("F - Feminino\nM - Masculino\n");
		printf("Informe seu sexo:");
		scanf("%s",&sexo);
		system("cls");
		printf("Informe sua idade:");
		scanf("%d",&idade);
		system("cls");
		printf("1 - Fundamental\n2 - Medio\n3 - Superior\n");
		printf("Informe sua escolaridade:\n");
		scanf("%d",&escola);
		if((sexo=='F' && idade <30 && escola == 3 || sexo=='f'  && idade <30 && escola == 3|| sexo=='M' && idade <30 && escola == 3 || sexo=='m' && idade <30 && escola == 3)){
				
			printf("Auxiliar de RH\n");	
		
		}
		if(sexo=='F' || sexo=='f' && idade <25 && escola==2){
			printf("Recepcionista.\n");
		}
		if(sexo=='M' || sexo=='m' && idade>40 && escola ==1){
			printf("Servente.\n");
		}
		
		system("pause");
		system("cls");
	}
}
