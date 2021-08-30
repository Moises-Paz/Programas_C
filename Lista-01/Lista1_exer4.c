#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	int numero;
	double quadrado, triplo, soma, raizQ;
	printf("Digite um numero:");
	scanf("%d",&numero);
	quadrado = pow(numero,2);
	triplo = pow(numero,3);
	raizQ = sqrt(numero);
	soma = quadrado + triplo;
	printf("Quadrado: %.f\nTriplo: %.f\nRaizQ: %.f\nSoma: %.f\n",quadrado,triplo,raizQ,soma);
    system("pause");
}
