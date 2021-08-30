#include <stdio.h>
typedef struct
	{
		float nota1, nota2, media;
		char conceito;
	}escola;
	

float mediapond(float nota1, float nota2)//calcula a media ponderada das notas;
{
	float retorna = ((nota1 * 4) + (nota2 * 6)) / (4+6);
	return retorna;
}

char conceito( float media)//verifica o conceito da nota;
{
	char c;
	if(media>=0 && media<5)
	{
		c = 'D';
	}
	else
	{
		if(media>=5 && media<7)
		{
			c = 'C';
		}
		else
		{
			if(media>=7 && media<9)
			{
				c = 'B';
			}
			else
			{
				if(media>=9)
				{
					c = 'A';
				}
			}
		}
	}
	return c;
}

int main(){
	escola notaDeAluno[10];
	for(int x=0; x<10; x++)
	{
		printf("	INFORME A NOTA DO ALUNO %d\n",x+1);
		printf("Informe a nota 1: ");
		scanf("%f", &notaDeAluno[x].nota1);
		printf("Infrome a nota 2: ");
		scanf("%f", &notaDeAluno[x].nota2);
	}
	
	
	for(int x=0; x<10; x++)
	{
		notaDeAluno[x].media = mediapond(notaDeAluno[x].nota1, notaDeAluno[x].nota2);
	}
	
	for(int x=0; x<10; x++)
	{
		notaDeAluno[x].conceito = conceito(notaDeAluno[x].media);
	}
	printf("ALUNO		MEDIA		CONCEITO\n");
	for(int x=0; x<10; x++)
	{
		printf("  %d		%f	    %c\n", x+1, notaDeAluno[x].media, notaDeAluno[x].conceito);
	}
	
	return 0;
}
