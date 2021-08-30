#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	float A, B, C, delta;
	float x1, x2, x;
	printf("Valor para o coeficiente A: ");
	scanf("%f", &A);
	printf("Valor para o coeficiente B: ");
	scanf("%f", &B);
	printf("Valor para o coeficiente C: ");
	scanf("%f", &C);
	if(A != 0)
	{
		printf("\nEquacao: %.fx^2 + (%.fx) + (%.f)= 0\n\n", A, B, C);
		delta = (B*B)-(4*A*C);
		if(delta>0)
		{
			x1 = (-B + sqrt(delta)) / (2 * A);
			x2 = (-B - sqrt(delta)) / (2 * A);
			printf("===POSSUI DUAS RAIZES REAIS E DISTINTAS===\nX1 = %f\nX2 = %f\n",x1,x2);
		}
		else
		{
			if(delta<0)
			{
				printf("NAO POSSUI RAIZES REAIS.\n");
			}
			else
			{
				if(delta==0)
				{
					x = (-B + sqrt(delta)) / (2 * A);
					printf("===POSSUI APENAS UMA RAIZ REAL===\nX = %f\n",x);
				}
			}
		}
		
	}
	else
	{
		printf("\nVALOR DE A = 0, PORTANTO NAO CONFIGURA UMA EQUACAO DO SEGUNDO GRAU.\n");
	}
	system("pause");
	return 0;
}
