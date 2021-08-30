#include <stdio.h>
int main(){
	float matriz[4][4], soma = 0,soma2 = 0;
	int cont =0;
	printf("LINHA		COLUNA		VALOR\n");
	for(int l=0; l<4; l++)
	{
		for(int c=0; c<4;c++)
		{
			printf("  %d		  %d		",l,c);
			scanf("%f",&matriz[l][c]);
		}
		puts("");
	}
	for(int C = 0; C<4; C++)
	{
		if(!(C % 2) != 0)
		{
			for(int L = 0; L<4; L++)
			{
				soma = matriz[L][C] + soma;		
			}
		}
	}
	printf("%f", soma);
	
	for(int C=0; C<4; C++)
	{
		if(!(C % 2) == 0)
		{
			for(int L=0; L<4; L++)
			{
				soma2 = matriz[L][C] + soma2;
				printf("\n%f\n",soma2);
				cont += 1;
			}
		}
	}
	printf("%f\n",soma2/cont);
	return 0;
}
