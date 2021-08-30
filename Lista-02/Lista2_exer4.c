#include <stdio.h>
#include <stdlib.h>
void main(){
	int A,B,C;
	printf("Informe o valor de A:");
	scanf("%d",&A);
	printf("Informe o valor de B:");
	scanf("%d",&B);
	printf("Informe o valor de C:");
	scanf("%d",&C);
	if(A>B && A>C){
		printf("B + C = %d\n",B+C);
	}else if(B>A && B>C){
			printf("A * C = %d\n",A*C);
	}else if(C>A && C>B){
			printf("A - B = %d\n",A-B);
	}
	system("pause");
	
}
