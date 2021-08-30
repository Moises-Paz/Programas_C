#include <stdio.h>
#include <stdlib.h>
void main(){
	float sal, calculo;
	sal = 1;
	while(sal>0){
		printf("Informe seu salario:R$");
		scanf("%f",&sal);
		if(sal >0 && sal<=600){
			printf("Isento\n");
		}else if(sal > 600 && sal <= 1200){
				calculo = ((sal*10)/100);
				printf("Desconto do INSS: R$%.2f\n",calculo);
		}else if(sal > 1200 && sal <= 2000){
				calculo = (sal*15)/100;
				printf("Desconto do INSS: R$%.2f\n",calculo);
		}else if(sal > 2000){
				calculo = (sal*20)/100;
				printf("Desconto do INSS: R$%.2f\n",calculo);
		}
		system("pause");
		system("cls");
		
	}
}
