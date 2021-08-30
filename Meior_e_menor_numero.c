#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n1, n2, n3, menor = 15;
	printf("Digite 3 numeros inteiros: ");
	scanf("%d %d %d", &n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		printf("O numero ''%d'' eh o maior.\n", n1);
	}
	else
	{
		if(n2>n1 && n2>n3)
		{
		printf("O numero ''%d'' eh o maior.\n", n2);
		}
		else
		{
			printf("O numero ''%d'' eh o maior.\n", n3);
	    }
	}
		
		
	if(n1<n2 && n1<n3)
	{
		printf("O numero ''%d'' eh o menor.\n", n1);
	}
	else
	{
		if(n2<n1 && n2<n3)
		{
			printf("O numero ''%d'' eh o menor.\n", n2);
		}else{
			printf("O numero ''%d'' eh o menor.\n", n3);
		}
	}
	system("pause");
	return 0;
}

