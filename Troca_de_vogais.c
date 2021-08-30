#include <stdio.h>
void troca(char *frase)
{
	for(int m = 0; frase[m] != '\0'; m++)
	{
		switch(frase[m])
		{
			case 'a':
			{
				frase[m] = 'u';
				break;
			}
			case 'e':
			{
				frase[m] = 'o';
				break;
			}
			case 'i':
			{
				frase[m] = 'u';
				break;
			}
			case 'o':
			{
				frase[m] = 'a';
				break;
			}
			case 'u':
			{
				frase[m] = 'e';
				break;
			}
		}
	}
}
int main(){
	char frase[100], *vetor;
	printf("Infome uma frase: ");
	gets(frase);
	troca(frase);	
	printf("A frase com as vogais trocada eh: %s", frase);
	return 0;
}
