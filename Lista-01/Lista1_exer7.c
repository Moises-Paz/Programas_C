#include <stdio.h>
#include <stdlib.h>
void main(){
	float peso1, peso2, altura1, altura2, IMC1, IMC2;
	printf("Informe o PESO da primeira pessoa:");
	scanf("%f",&peso1);
	printf("Informe o PESO da segunda pessoa:");
	scanf("%f",&peso2);
	printf("Agora, informe a ALTURA da primeira pessoa:");
	scanf("%f",&altura1);
	printf("Informe a altura da segunda pessoa:");
	scanf("%f",&altura2);
	IMC1 = peso1/(altura1*altura1);
	IMC2 = peso2/(altura2*altura2);
	printf("Pessoa 01 seu imc eh: %.2f\n",IMC1);
	printf("Pessoa 02 sue imc eh: %.2f\n",IMC2);
	system("pause");
}
