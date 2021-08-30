#include <stdio.h>
#include <stdlib.h>
void main(){
	float base, grati, imposto;
	printf("Salario base?");
	scanf("%f",&base);
	grati = base + ((base*9)/100);
	imposto = grati - ((grati*6.5)/100);
	printf("Total: %f\n",imposto);
	system("pause");
	
}
