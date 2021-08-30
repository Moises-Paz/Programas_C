#include <stdio.h>
#include <stdlib.h>
void main(){
	float raio, area, perimetro;
	printf("Informe o raio do circulo:");
	scanf("%f",&raio);
	area = 3.14*(raio*raio);
	perimetro = 2.0*3.14*raio;
	printf("Area: %.2f \nPerimetro: %.2f\n",area,perimetro);
	system("pause");
	}
