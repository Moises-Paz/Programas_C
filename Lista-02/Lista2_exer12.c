#include <stdio.h>
#include <stdlib.h>
void main(){
	int idade;
	printf("Informe sua idade:");
	scanf("%d",&idade);
	if(idade<16){
		printf("Nao eleitor\n");
	}else if(idade>=18 && idade<65){
			printf("Eleitor obrigatorio\n");
	}else if(idade>=65){
			printf("Eleitor facultativo\n");
	}
	system("pause");
}
