#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
	int x1,x2,y1,y2;
	float calculo;
	printf("Informe a coordenada de A:");
	scanf("%d %d",&x1,&x2);
	printf("Informe a coordenada de B:");
	scanf("%d %d",&y1,&y2);
	calculo = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("Resultado: %.5f\n",calculo);
	system("pause");
	
}
