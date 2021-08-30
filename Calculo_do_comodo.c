#include <stdio.h>
#include <math.h>
float area(float l, float c)
{
	int areatotal = l * c;
	return areatotal;
}

int main()
{
	float valorT = 0, largura, comprimento;
	int tipo=0;
	
	while(tipo != -1)
	{
		printf("tipo de comodo: [Digite -1 para parar]");
		scanf("%d", &tipo);
		if(tipo == -1)
		{
			break; 
		} 
		
		if(tipo<=4 && tipo >=0)
		{
			printf("largura do comodo: ");
		scanf("%f", &largura);
		printf("comprimento do comodo: ");
		scanf("%f", &comprimento);
		}
		
		switch (tipo)
		{
			case 0:
				valorT = valorT + area(largura, comprimento)* 12;
			break;
			
			case 1:
				valorT = valorT + area(largura, comprimento) * 15;
			break;
			
			case 2:
				valorT = valorT + area(largura, comprimento) * 18;
			break;
			
			case 3:
				valorT = valorT + area(largura, comprimento) * 20;
			break;
			
			case 4:
				valorT = valorT + area(largura, comprimento) * 22;
			break;
			
			default: puts("INFORMACAO INVALIDA\n");
		}
	}
	if(largura != 0)
	{
		int lampada = 0;
		lampada=ceil(valorT)/60;
		printf("Quantidade de lampadas necessarias: %d", lampada);
	}
	
	return 0;
}
