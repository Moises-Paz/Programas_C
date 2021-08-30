#include <stdio.h>
#include <stdlib.h>
void main(){
	float pes,polegadas, jardas, milhas;
	printf("Informe o valor em pes:");
	scanf("%f",&pes);
	polegadas = pes * 12;
	jardas = pes /3;
	milhas = jardas / 1760;
	printf("polegadas: %f\nJardas: %f\nMilhas: %f\n",polegadas,jardas,milhas);
	system("pause");
}
