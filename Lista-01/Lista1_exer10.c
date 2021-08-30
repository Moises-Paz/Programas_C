#include <stdio.h>
#include <stdlib.h>
void main(){
	float n1,n2,n3,n4,n5;
	float calculo;
	printf("Informe 5 numeros:");
	scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
	calculo = (((n1*2)+(n2*4)+(n3*6)+(n4*8)+(n5*10))/(2+4+6+8+10));
	printf("Media ponderada: %.2f\n",calculo);
	system("pause");
}
