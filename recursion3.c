#include <stdio.h>
int recursiva(int numero)
{
	if(numero == 1)
	{
		return numero;
	}
	else
	{
		return numero + recursiva(numero -1);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d",recursiva(n));
	return 0;
}
