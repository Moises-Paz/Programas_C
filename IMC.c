#include <stdio.h>
#include <stdlib.h>
int main(void){
	int parada;
	float altura, peso, IMC;
	char nome[40];
	printf("===CALCULO DO IMC===\n");
	do
	{	
		printf("\nInforme seu nome: ");
		gets(nome);
		printf("Informe sua altura: ");
		scanf("%f",&altura);
		printf("Informe seu peso: ");
		scanf("%f",&peso);
		IMC = peso /(altura*altura);
		printf("%s seu IMC eh de %.1f\n\n",nome,IMC);
		printf("Se deseja parar a execucao digite 0 (ZERO) ou 1 (UM) PARA CONTINUAR: ");
		scanf("%d",&parada);
		system("cls");		
	}while(parada!=0);
	return 0;
}
