#include <stdio.h>
#include <stdlib.h>
void main(){
	int n1,n2,n3;
	printf("Informe 3 numeros:");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3){
		printf("%d eh o maior numero\n",n1);
	}else if(n2>n1 && n2>n3){
		printf("%d eh o meior numero\n",n2);
	}else if(n3>n1 && n3>n2){
		printf("%d eh o meior numero\n",n3);
	}
	if(n1<n2 && n1<n3){
		printf("%d eh o menor numero\n",n1);
	}else if(n2<n1 && n2<n3){
		printf("%d eh o menor numero\n",n2);
	}else if(n3<n1 && n3<n2){
		printf("%d eh o menor numero\n",n3);
	}
	system("pause");
}
