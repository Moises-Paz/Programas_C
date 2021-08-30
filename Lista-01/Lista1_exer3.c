#include <stdio.h>
#include <stdlib.h>
void main(){
	int idade1, idade2, multiplicacao;
	printf("Digite a idade da primeira pessoa:");
	scanf("%d",&idade1);
	printf("\nDigite a idade da segunda pessoa:");
	scanf("%d",&idade2);
	multiplicacao = idade1 * idade2;
	printf("\nA multiplicacao das idades eh: %d\n",multiplicacao);
	system("pause");
}
