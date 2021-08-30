#include <stdio.h>
int main(){
	int contador =0, some=0;
	char frase[100], letra;
	
	printf("Digite uma frase: ");
	gets(frase);
	printf("Informe uma letra para saber quantas vezes ela aparece na frase: ");
	scanf(" %c",&letra);
	for( ; frase[contador] != '\0'; contador++)
	{
		if(frase[contador] == letra)
		{
			some += 1;
		}
	}
	printf("A letra %c aparece %d na frase '%s'.", letra, some, frase);
	
	return 0;
}
