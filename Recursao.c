#include <stdio.h>
void inverte(int vetor[], int min, int max)
{
	int t;
	if(min>=max)
	{
		return;
	}
	t = vetor[min];
	vetor[min] = vetor[max];
	vetor[max] = t;
	inverte(vetor, min +1, max-1);
}
int main(){
	int vetor[3];
	scanf("%d", &vetor[0]);
	scanf("%d", &vetor[1]);
	scanf("%d", &vetor[2]);
	int max=2, min =0;
	inverte(vetor, min, max);
	printf("%d", vetor[0]);
	printf("%d", vetor[1]);
	printf("%d", vetor[2]);
	return 0;
}
