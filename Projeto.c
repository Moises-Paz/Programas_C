#include <stdio.h>
#include <stdlib.h>
struct informacoes
{
	float valor;
	char tipoDespesa;
};

int main(){
	struct informacoes base[10];
	int maior = 0, numeroDoProjeto=0;
	float saldo[10];
	while(numeroDoProjeto != -1)
	{
		numeroDoProjeto = -100;
		while(numeroDoProjeto < -1 || numeroDoProjeto>9)
		{
			printf("Informe o numero do projeto: ");
			scanf("%d", &numeroDoProjeto);
		}
		if(numeroDoProjeto == -1)
		{
			break;	
		}
		char confirma = 's';
		while(confirma != 'R' && confirma != 'D')
		{
			printf("Informar tipo de dispesa:\nR - Receita\nD - Dispesas\n");
			scanf(" %c", &base[numeroDoProjeto].tipoDespesa);
			confirma = base[numeroDoProjeto].tipoDespesa;
		}
		if(base[numeroDoProjeto].tipoDespesa == 'R')
		{
			printf("Informe o valor da receita: ");
			scanf("%f", &base[numeroDoProjeto].valor);	
		}
		else
		{
			printf("Informe o valor da dispesa: ");
			scanf("%f", &base[numeroDoProjeto].valor);	
		}
		
		if(base[numeroDoProjeto].tipoDespesa == 'R')
		{
			saldo[numeroDoProjeto] += base[numeroDoProjeto].valor;
		}
		else 
		{
			if(base[numeroDoProjeto].tipoDespesa == 'D')
			{
				saldo[numeroDoProjeto] -= base[numeroDoProjeto].valor;
			}	
		}	
	}
    int contador =0;
    while(contador < 10)
    {
    	printf("Saldo do projeto %d = %f\n", contador, saldo[contador]);
    	contador +=1;
	}
	return 0;
}
