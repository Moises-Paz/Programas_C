#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("Numero   |   Elevado ao quadrado\n");
	for(int x = 1; x<=n; x++){
		printf("%d                     %d\n",x, (x*x));
	}
	system("pause");
	return 0;
}
