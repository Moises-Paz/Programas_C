#include <stdio.h>
#include <stdlib.h>
void inverte(int N){
	int resto;
	if(N >= 0)
	{
		do
		{
			resto = N % 10;
			printf("%d",resto);
			N = N / 10;
		}while(N != 0);		
	}
	else 
	{
		if(N<0)
	{
		N = N *(-1);
		printf("-");
		do
		{
			resto = N % 10;
			printf("%d",resto);
			N = N / 10;
		}while(N != 0);
	}
	}
	
	
}
int main(){
	unsigned int numero;
	printf("Informe um numero com mais de um digito: ");
	scanf("%d",&numero);
	inverte(numero);
	return 0;
}
