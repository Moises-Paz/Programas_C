#include <stdio.h>
#include <stdlib.h>
struct carro
	{
		char modelo[40];
		char marca[40];
		char cor[20];
		char placa[20];
		int ano;
	};
	
int main(){
	struct carro carros[10];
	char numeroDeEntrada, adicionarCarro = 0, x = 0, parada;
	while(parada != 3)
	{
		printf("1 - Adicionar carro.\n2 - Listar carros adicionados.\n3 - Fechar programa. \n");
		scanf(" %c", &numeroDeEntrada);
		switch(numeroDeEntrada)
		{
			case '1':
			{
				if(adicionarCarro<10)
				{
					x = adicionarCarro;
					printf("Adicionar novo modelo: ");
					scanf(" %s", carros[x].modelo);
					printf("Marca do novo carro: ");
					scanf(" %s", carros[x].marca);
					printf("Cor do novo carro: ");
					scanf(" %s", carros[x].cor);
					printf("Placa: ");
					scanf(" %s", carros[x].placa);
					printf("Informar ano do veiculo: ");
					scanf("%d", &carros[x].ano);
					adicionarCarro = adicionarCarro + 1;
					break;
				}
				else
				{
					printf("LIMITE ATINGINDO!! JA HA 10 CARROS ADICIONADOS.\n");
					break;					
				}
				
			}
			case '2':
			{
				if(adicionarCarro != 0)
				{
					for(int x=0; x<adicionarCarro; x++)
					{
						printf("Modelo do veiculo %d: %s\n", x+1, carros[x].modelo);
						printf("Marca do veiculo %d: %s\n", x+1, carros[x].marca);
						printf("Cor do veiculo %d: %s\n", x+1, carros[x].cor);
						printf("Placa do veiculo %d: %s\n", x+1, carros[x].placa);
						printf("Ano do veiculo %d: %d\n", x+1, carros[x].ano);
						printf("\n");	
					}
					break;	
				}
				else
				{
					printf("[NAO HA CARROS ADICIONADOS]\n");
					break;
				}
				
			}
			case '3':
			{
				parada = 3;
				break;		
			}
			default:
			{
				printf("[NUMERO INVALIDO]\n");		
			}		
		}
	}	
	return 0;
}
