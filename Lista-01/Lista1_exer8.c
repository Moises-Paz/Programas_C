#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){
	int N1, N2, N3, soma;
	float quadrado,raiz;
	printf("Digite 3 nuemeros:");
	scanf("%d",&N1);
	scanf("%d",&N2);
	scanf("%d",&N3);
	soma = N1+N2+N3;
	quadrado = pow(N1,2);
	raiz = sqrt(N1*N2*N3);
	printf("Soma: %d\n",soma);
	printf("Quadrado: %.f\n",quadrado);
	printf("Raiz: %f\n",raiz);
	system("pause");
}
