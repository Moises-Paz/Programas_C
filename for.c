#include <stdio.h>
#include <stdlib.h>
int main(){
	int L1[3]= {1,3,4}, L2[7]= {-1,0,2,5,7,9,10}, L1maisL2[10];
	for(int z=0; z<3; z++)
	{
		L1maisL2[z] = L1[z];
	}
	int d=0;
	for(int l=3; l<10; l++)
	{
		L1maisL2[l] = L2[d];
		d=d+1;
	}
	for(int k=0; k<10; k++)
	{
		printf("%d\n",L1maisL2[k]);
	}
	
	system("pause");
	return 0;
}
