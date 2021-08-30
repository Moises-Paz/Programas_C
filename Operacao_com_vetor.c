#include <stdio.h>
#include <stdlib.h>
int main(){
	int estoque[5][5]= {{150,0,100,150,200}, {200,300,230,100,90}, 
	{250,300,0,200,150}, {300,100,90,450,0},{350,300,400,250,200}};
	int linha, coluna, quantidade;
	do{
		printf("Informe o numero da linha: ");
		scanf("%d", &linha);
		if(linha == -1)
		{
			break;
		}
		printf("Agora, informe o numero da coluna: ");
		scanf("%d", &coluna);
		printf("Quantidade: ");
		scanf("%d", &quantidade);
		if(quantidade <= estoque[linha][coluna])
		{
			estoque[linha][coluna] = estoque[linha][coluna] - quantidade;
			printf("Operacao realizada com sucesso!\n");
		}
		else 
		{
			if(quantidade> estoque[linha][coluna])
			{
				printf("Estoque com quantidade insuficiente para atender ao pedido.\n");
			}
		}
	}while(linha != -1);
	
	for(int x=0;x<5;x++)
	{
		for(int b=0; b<5; b++)
		{
			printf("%d   ",estoque[x][b]);
		}
		puts("");
	}

	return 0;
}
