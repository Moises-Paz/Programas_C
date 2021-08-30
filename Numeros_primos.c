#include <stdio.h>
#include <stdlib.h>
int main(void){
	int numero, resto, soma=0;
	printf("Informe um numero: ");
	scanf("%d",&numero);
	for(int m=2; m<=numero; m++)
	{
		for(int x=1; x<=m; x++)
		{
			resto = m%x;
			if(resto==0)
			{
				soma=soma+1;
			}			
		}
		if(soma==2)
		printf("%d\n",m);
		soma =0;		
	}
	system("pause");
	return 0;
}
