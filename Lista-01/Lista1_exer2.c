#include <stdio.h>
#include <stdlib.h>
void main(){
	float N1, N2, N3, N4, N5, operacao;
	float P1, P2, P3, P4, P5;
	printf("Digite o primeiro numero:");
	scanf("%f",&N1);
	printf("Digite o peso da nota:");
	scanf("%f",&P1);
	printf("Digite o segundo numero:");
	scanf("%f",&N2);
	printf("Digite o peso da nota:");
	scanf("%f",&P2);
	printf("Digite o terceiro numero:");
	scanf("%f",&N3);
	printf("Digite o peso da nota:");
	scanf("%f",&P3);
	printf("Digite o quarto numero:");
	scanf("%f",&N4);
	printf("Digite o peso da nota:");
	scanf("%f",&P4);
	printf("Digite o quinto numero:");
	scanf("%f",&N5);
	printf("Digite o peso da nota:");
	scanf("%f",&P5);
	operacao = ((N1*P1) + (N2*P2) + (N3*P3) + (N4*P4) + (N5*P5))/ (P1 + P2 + P3 + P4 + P5);
	printf("A media eh: %.2f\n",operacao);
	system("pause");
}
