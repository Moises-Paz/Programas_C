#include <stdio.h>
#include <stdlib.h>
void main(){
	float valor,parcelas,valor2,soma;
	char codigo;
	printf("Informe o codigo:");
	scanf("%c",&codigo);
	printf("Valor da transacao");
	scanf("%f",&valor);
	soma=0;
	while(codigo!='v'||codigo!='V'||codigo!='P'||codigo!='p'){
		printf("%c",codigo); 
		printf("Valor da compra: R$%.2f\n",valor);
		printf("Parcelar em quantas vezes?\n");
		scanf("%f",&parcelas);
		valor2 = valor/parcelas;
		printf("Valor a prazo: R$%.2f\n",valor2);
		soma = soma+valor+valor2;	
	}
	printf("Valor total: %.2f\n",soma);
}
