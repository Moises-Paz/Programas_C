#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
	int n1, n2;
	printf("Informe dois numeros: ");
	scanf("%d %d", &n1, &n2);
	printf("Soma: %d\n", n1+n2);
	printf("Produto do primeiro pelo quadrado do segundo: %d\n",n1 * (n2*n2));
	printf("Quadrado do primeiro: %d\n", n1*n1);
	printf("Raiz da soma dos quadrados: %f\n", sqrt(((n1*n1)+(n2*n2))));
	printf("Seno: %f\n", sin(n1-n2));
	if(n1>=0)
	{
		printf("|%d| = %d\n",n1, n1);
	}
	else
	{
		printf("|%d| = %d\n",n1, n1*(-1));
	}
	system("pause");
	return 0;
}
