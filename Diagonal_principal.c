#include <stdio.h>
#include <stdlib.h>
int main(){
	int matriz[5][5];
	for(int L=0;L < 5; L++)
	{
		for(int C=0; C < 5; C++)
		{
			if(L==C)
			{
				matriz[L][C] = 1;
			}
			else
			{
				matriz[L][C] = 0;
			}
		}
	}
	for(int L=0; L < 5; L++)
	{
		for(int C=0; C < 5 ; C++)
		{
			printf("%d  ",matriz[L][C]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
