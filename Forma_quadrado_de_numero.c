#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, cl, cont= -1;
	scanf("%d", &numero);
	cl = 2 * numero - 1;
	int consti=0;
	system("cls");
	int matriz[cl][cl];
	for(int l=0; l<cl; l++)
	{
		for(int c=0; c<cl; c++)
		{
			matriz[l][c]=0;
		}
	}
	for(int m=0; m<cl; m++)
	{
	
		for(int l=consti; l<cl-consti; l++)
		{
		
			for(int c=consti; c<cl-consti; c++)
			{
				if(l==0 + consti||l == cl-1-consti||c == 0+consti||c == cl-1-consti)
				{
					matriz[l][c]=numero;
				} 
			}	
		}
		consti++;
		numero--;
	}
	for(int L=0; L<cl; L++) 
	{
		for(int C=0; C<cl; C++)
		{
			printf("%d ",matriz[L][C]);
		} 
		puts("");
	}
	system("pause");
	return 0;
}
