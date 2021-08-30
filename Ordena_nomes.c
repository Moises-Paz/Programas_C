#include <stdio.h>
#define GLOBAL 50
void insertionSort(char *vetor[], int tam)
{
	for(int x=0; x<tam-1; x++)
    {	
		for(int z = 0; z<GLOBAL; z++) 
        {
            if(vetor[x][z]>vetor[x+1][z])
            {
                char *p = vetor[x+1]; 
            	vetor[x+1] = vetor[x];
            	vetor[x] = p;
                break;
            }
            else
			{
				if(vetor[x][z]<vetor[x+1][z])
           		{
            		break;
				}
			} 
        }
    }
	if(tam>1)
    {
		insertionSort(vetor, tam-1);
    }		
}
 
int main(){
	int n;
	printf("Informe quantas vezes quer digitar um nome: "); 
	scanf("%d", &n);
	char *poit[n];
	fflush(stdin);
	char nomes[n][GLOBAL];
	printf("Informe os nomes.\n");	
	for(int x=0; x<n; x++)
	{
		gets(nomes[x]);
		poit[x] = nomes[x];
	}
	insertionSort(poit, n);
	printf("\nNomes em ordem:\n");
	for(int x=0; x<n; x++)
	{
		printf("%s\n",poit[x]);
	} 
	return 0;
}
