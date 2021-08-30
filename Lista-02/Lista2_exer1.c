#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int n1,n2;
	float raiz1, raiz2;
	printf("Informe o primeiro numero:");
	scanf("%d",&n1);
	printf("Informe o segundo numero:");
	scanf("%d",&n2);
	if(n1==n2){
		printf("Nemeros iguais\n");
	}else{
	if(n1<n2){
		printf("Menor numero ao quadrado: %d\n", n1*n1);
		raiz2 = sqrt(n2);
		printf("Raiz do maior numero: %f\n",raiz2);
	}else{
		printf("Menor numero ao quadrado: %d\n",n2*n2);
		raiz1 = sqrt(n1);
		printf("Raiz do maior numero: %f\n",raiz1);
	}
        }
        
    system("pause");
    
	}
