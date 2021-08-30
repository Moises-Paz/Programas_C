#include <stdio.h>
#include <stdlib.h>
int main(void){
	int fahrenheit;
	float C;
	printf("Digite um valor em Fahrenheit: ");
	scanf("%d", &fahrenheit);
	C = (fahrenheit - 32)*(0.5555555555555556);
	printf("Graus Celsius: %f\n", C); 
	system("pause");
	
	return 0;
}
