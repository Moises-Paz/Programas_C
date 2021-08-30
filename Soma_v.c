#include <stdio.h>
#include <stdlib.h>
int main(){
	int A[5];
	A[0]=1;
	A[1]=0;
	A[2]=5;
	A[3]=-2;
	A[4]=-5;
	A[5]=7;
	int soma = A[0] + A[1] + A[2];
	printf("Soma = %d\n",soma);
	A[4] = 100;
	for(int x=0;x<6; x++)
	{
		printf("A%d =%d\n", x, A[x]);
	}
	
	system("pause");
	return 0;
}
