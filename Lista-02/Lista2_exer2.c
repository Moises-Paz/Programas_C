#include <stdio.h>
#include <stdlib.h>
void main(){
	int n1,n2,n3,n4;
	printf("Digite o primeiro numero:");
	scanf("%d",&n1);
	printf("Digite o segundo numero:");
	scanf("%d",&n2);
	printf("Digite o terceiro numero:");
	scanf("%d",&n3);
	printf("Digite o quarto numero:");
	scanf("%d",&n4);
	if(n1>n2 && n1>n3 && n1>n4){
		printf("Maior numero: %d\n",n1);
	}else if(n2>n1 && n2>n3 && n2>n4){
			printf("Maior numero: %d\n",n2);
	}else if(n3>n1 && n3>n2 && n3>n4){
		    printf("Maior numero: %d\n",n3);
	}else if(n4>n1 && n4>n2 && n4>n3){
			printf("Maior numero: %d\n",n4);
	}
	system("pause");
}
