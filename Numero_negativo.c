#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float raiz(int a){
	int modulo = a * (-1);
	float T = sqrt(modulo);
	return T;
}
int main(void){
	int n;
	printf("Informe um numero negativo: ");
	scanf("%d",&n);
	printf("\nRaiz do modulo de %d eh = %f\n\n", n, raiz(n));
	system("pause");
	return 0;
}
