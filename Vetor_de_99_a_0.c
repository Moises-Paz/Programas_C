#include <stdio.h>
void inicioZero(int *ponteiro)
{
	int *mul, v=99;
	mul = ponteiro + 100;
	for(ponteiro; ponteiro < mul; ponteiro++)
	{
		*ponteiro=v;
		v--;
	}
}
void preencher(int *ponteiro2)
{
	int *mult;
	mult = ponteiro2 + 100;
	for(ponteiro2; ponteiro2 < mult; ponteiro2++)
	{
		*ponteiro2 = 0;
	}
}
int main(){
	int matriz[10][10];
	preencher(&matriz[0][0]);
	inicioZero(&matriz[0][0]);
	for(int L=0;L<10;L++) 
	{
		for(int C=0;C<10;C++)
		{
			printf("%d ",matriz[L][C]);
		}
		puts("");
	}
	return 0;
}
