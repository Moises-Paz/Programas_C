#include <stdio.h>
int main(){
	char frase[100];
	int n0 =0, n1=0, n2=0, n3=0, n4=0;
	int n5 =0, n6=0, n7=0, n8=0, n9=0;
	int contador =0;
	printf("Informe uma frase: ");
	gets(frase);
	for(;frase[contador] != '\0'; contador++)
	{
		switch(frase[contador])
		{
			case '0':
			{
				n0 +=1;
				break;
			}
			case '1':
			{
				n1 +=1;
				break;
			}
			case '2':
			{
				n2 +=1;
				break;
			}
			case '3':
			{
				n3 +=1;
				break;
			}
			case '4':
			{
				n4 +=1;
				break;
			}
			case '5':
			{
				n5 +=1;
				break;
			}
			case '6':
			{
				n6 +=1;
				break;
			}
			case '7':
			{
				n7 +=1;
				break;
			}
			case '8':
			{
				n8 +=1;
				break;
			}
			case '9':
			{
				n9 +=1;
				break;
			}
		}
	}
	printf("%d %d %d %d %d %d %d %d %d %d", n0, n1, n2, n3, n4, n5, n6, n7, n8, n9);
	return 0;
}
