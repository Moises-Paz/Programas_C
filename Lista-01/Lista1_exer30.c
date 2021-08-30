#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main(){
	int A,B,C;
	float D,R,S;
	printf("Informe 3 numeros inteiros:");
	scanf("%d %d %d",&A,&B,&C);
	R = pow((A+B),2);
	S = pow((B+C),2);
	D =  (R + S)/2;
	printf("Resultado: %f\n",D);
	system("pause");
}
