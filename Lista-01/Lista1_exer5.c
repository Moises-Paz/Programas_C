#include <stdio.h>
#include <stdlib.h>
void main(){
	float largura, comprimento,carpete,area, valor;
	printf("Informe a largura:");
	scanf("%f",&largura);
	printf("Informe o comprimento:");
	scanf("%f",&comprimento);
	printf("Agora, informe o valor do metro do carpete:");
	scanf("%f",&carpete);
	area = largura * comprimento;
	valor = area * carpete;
	printf("Custo total para forrar o piso eh de: R$%.2f\n",valor);
	system("pause");
}
