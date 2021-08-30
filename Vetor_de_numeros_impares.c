#include <stdio.h>
#include <stdlib.h>
int main(){
	int vetor[10], impar = 1;
	for(int x=0; x<10; x++)
	{
		vetor[x] = impar; 
		printf("%d\n",vetor[x]);
		impar = impar + 2;
	}
	system("pause");
	return 0;
}
