#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){
	float raio, calculo;
	printf("Informe o raio:");
	scanf("%f",&raio);
	calculo = (4*3.14*pow(raio,3))/3;
	printf("Volume: %f\n",calculo);
	system("pause");
}
