#include <stdio.h>
#include <stdlib.h>
void main(){
	float c, conversao;
	printf("Informe a temperatura em graus celsius:");
	scanf("%f",&c);
	conversao = (9*c)/5+32;
	printf("Fahrenheit: F%.1f\n",conversao);
	system("pause");
}
