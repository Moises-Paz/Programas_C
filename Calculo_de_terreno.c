#include <stdio.h>
typedef struct terrenos
	{
		
		float lado1, lado2, metroQuadrado, valorCusto;
		
	}lados;

void leitura(lados vetor2[])//ler as informaçoes dos terrenos;
{
	for(int x = 0; x<10; x++)
	{
		printf("TERRENO %d\n", x+1);
		printf("Informe o lado 01: ");
		scanf("%f", &vetor2[x].lado1);
		printf("Informe o lado 02: ");
		scanf("%f", &vetor2[x].lado2);	
	}
}

void area(lados vetor3[])//calcula as areas dos terrenos;
{
	for(int x=0; x<10; x++)
	{
		vetor3[x].metroQuadrado = vetor3[x].lado1 * vetor3[x].lado2;
	}
}

void valor(lados vetor4[])//calcula o valor dos terrenos;
{
	for(int x=0; x<10; x++)
	{
		vetor4[x].valorCusto = vetor4[x].metroQuadrado * 200;
	}
}

void menorMaior(lados vetor5[], int *maior, int *menor)//Calcula qual terreno eh mais barrato ou mais carro;
{
	int primeiro = vetor5[0].valorCusto;
	int segundo = vetor5[0].valorCusto;
	for(int x=0; x<10; x++)
	{
		if(vetor5[x].valorCusto > primeiro)
		{
			primeiro = vetor5[x].valorCusto;
			*maior = x;
		}
		
		if(vetor5[x].valorCusto < segundo)
		{
			segundo = vetor5[x].valorCusto;
			*menor = x;	
		}
	}
}

void mostra(lados terrenos[], int *maior, int *menor)
{
	for(int x =0 ; x<10; x++)
	{
		if(x == *maior)
		{
			printf("\n\nTERRENO MAIS CARO: %d\n", x+1);
			printf("Lado 01: %fm\n", terrenos[x].lado1);
			printf("Lado 02: %fm\n", terrenos[x].lado2);
			printf("Area do terreno: %fm2\n", terrenos[x].metroQuadrado);
			printf("Valor R$: %f\n",terrenos[x].valorCusto);
		}
		if(x== *menor)
		{
			printf("\n\nTERRENO MAIS BARRATO: %d\n", x+1);
			printf("Lado 01: %fm\n", terrenos[x].lado1);
			printf("Lado 02: %fm\n", terrenos[x].lado2);
			printf("Area do terreno: %fm2\n", terrenos[x].metroQuadrado);
			printf("Valor R$: %f\n",terrenos[x].valorCusto);
		}
	}
}
int main(){
	int  menor2 = 0, maior2 = 0;
	int *menor, *maior;
	menor = &menor2;
	maior = &maior2;
	lados vetor[10];
	leitura(vetor);
	area(vetor);
	valor(vetor);
	menorMaior(vetor, maior, menor);
	mostra(vetor, maior, menor);
	return 0;
}
