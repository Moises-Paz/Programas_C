#include <stdio.h>
#include <stdlib.h>
int main(void){
	float metros, decimetro, centimetro, milimetro;
	printf("Digite um valor em metros: ");
	scanf("%f",&metros);
	decimetro = metros * 10; 
	centimetro = metros * 100;
	milimetro = metros * 1000;
	printf("Decimetro= %f\n",decimetro);
	printf("Centimetro= %f\n",centimetro);
	printf("Milimetro= %f\n",milimetro);
	system("pause");
	return 0;
}
