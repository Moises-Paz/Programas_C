/*Escolhi o algoritmo selection sort para fazer a ordenação da matricula e da nota porque é um algoritmo 
muito eficiente e rápido além de ser de fácil compreenção para ser implementado no programa.*/
#include <stdio.h>    
#include <stdlib.h>
struct pessoa{
		unsigned int matricula;
		float nota;
	};
void ordenaMatricula(struct pessoa *npoiter, int n)
{
	int aux;
	struct pessoa troca;
	for(int x=0; x<(n-1); x++)
	{
		aux = x;
		for(int j= x+1; j<n; j++)
		{
			if(npoiter[j].matricula < npoiter[aux].matricula)
			{
				aux = j;
			}
		}
		troca = npoiter[x];
		npoiter[x] = npoiter[aux];
		npoiter[aux] = troca;
	}
}
void ordenaNota(struct pessoa *npoiter, int n)
{
	int aux;
	struct pessoa troca;
	for(int x=0; x<(n-1); x++)
	{
		aux = x;
		for(int j= x+1; j<n; j++)
		{
			if(npoiter[j].nota < npoiter[aux].nota)
			{
				aux = j;
			}
		}
		troca = npoiter[x];
		npoiter[x] = npoiter[aux];
		npoiter[aux] = troca;
	}
}
int main(){
	unsigned int n;
	struct pessoa *npoiter = NULL;
	printf("Informe qual vai ser o tamanho do vetor de alunos: ");
	scanf("%d", &n);
	npoiter = (struct pessoa *) malloc(sizeof(struct pessoa)*n);
	for(int x=0; x<n;x++)
	{
		printf("Informe a matricula %d:		", x+1);
		scanf("%d", &npoiter[x].matricula);
		printf("Informe a nota:			");
		scanf("%f", &npoiter[x].nota);
		printf("-------------------------------\n");
	}
	system("cls");
	printf("ENTRADAS:\n");
	for(int print = 0; print<n; print++) // imprime as entradas;
	{
		printf("Matricula: %d\n",npoiter[print].matricula);
		printf("Nota: %f\n", npoiter[print].nota);
	}
	ordenaMatricula(npoiter, n);
	printf("\n\n-------------------------------\n");
	printf("ORDENADO POR MATRICULA:\n");
	for(int r = 0; r<n; r++) //imprime as matriculas ordenadas;
	{
		printf("MATRICULA: %d\n", npoiter[r].matricula);
		printf("Nota: %f\n", npoiter[r].nota);
	}
	printf("\n\n-------------------------------\n");
	printf("ORDENADO POR NOTA:\n");
	ordenaNota(npoiter, n);
	for(int notas = 0; notas<n; notas++) //imprime as notas ordenadas;
	{
		printf("Matricula: %d\n", npoiter[notas].matricula);
		printf("NOTA: %f\n", npoiter[notas].nota);
	}
	free(npoiter);
	npoiter = NULL;
	return 0;
}
