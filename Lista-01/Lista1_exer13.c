#include <stdio.h>
#include <stdlib.h>
void main(){
	float altura, base, area;
	printf("Informe a altura do triangulo:");
	scanf("%f",&altura);
	printf("Agora, informe a base do triangulo:");
	scanf("%f",&base);
	area = (base*altura)/2;
	printf("Area do triangulo: %.2f\n",area);
	system("pause");
}
