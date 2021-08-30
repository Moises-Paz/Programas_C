#include <stdio.h>
#include <stdlib.h>
void main(){
	float N1,N2,N3, operacao;
	printf("Digite a nota 1\n");
	scanf("%f",&N1);
	printf("Digite a nota 2\n");
	scanf("%f",&N2);
	printf("Digite a nota 3\n");
	scanf("%f",&N3);
	operacao = (N1+N2+N3)/3;
	printf("A media do aluno eh: %.2f\n",operacao);
	system("pause");
}
