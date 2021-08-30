#include <stdio.h>
#include <stdlib.h>
void main(){
	int N1, N2;
	float quociente, resto;
	printf("Informe o primeiro numero:");
	scanf("%d",&N1);
	printf("Informe o segundo numero:");
	scanf("%d",&N2);
	quociente = N1 / N2;
	resto = N1 % N2;
	printf("Quociente: %.2f\n",quociente);
	printf("Resto: %.2f\n",resto);
	system("pause");
}
