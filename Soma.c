#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n, soma;
	printf("Informe um numero: ");
	scanf("%d",&n);
	for(int x = 1; x<=n; x++){
		soma = soma + x;
	}
	printf("Soma =  %d\n\n", soma);
	system("pause");
	return 0;
}
