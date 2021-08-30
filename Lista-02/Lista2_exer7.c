#include <stdio.h>
#include <stdlib.h>
void main(){
	char estado[2];
	printf("Informe seu estado:");
	scanf("%s",estado);
	printf("\n");
	if(estado[0] == 'r' && estado[1] == 'j' || estado[0] == 'R' && estado[1] == 'j'|| estado[0] == 'R' && estado[1] == 'J'){
		printf("Carioca!\n");
	}else if(estado[0] == 's' && estado[1] == 'p' || estado[0] == 'S' && estado[1] == 'p'|| estado[0] == 'S' && estado[1] == 'P'){
			printf("Paulista!\n");
	}else if(estado[0] == 'p' && estado[1] == 'e' || estado[0] == 'P' && estado[1] == 'e'|| estado[0] == 'P' && estado[1] == 'E'){
			printf("Pernambucano!\n");
	}else if(estado[0] == 'a' && estado[1] == 'm' || estado[0] == 'A' && estado[1] == 'm'|| estado[0] == 'A' && estado[1] == 'M'){
			printf("Amazonense!\n");
	}else if(estado[0] == 'b' && estado[1] == 'a' || estado[0] == 'B' && estado[1] == 'a'|| estado[0] == 'B' && estado[1] == 'A'){
		printf("Baiano!\n");
	}else {
		printf("Outros estados.\n");
	}
	system("pause");
}
