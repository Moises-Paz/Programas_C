#include <stdio.h>
#include <stdlib.h>
void main(){
	int nascimento, ano, idade, mes, d2050;
	printf("Ano de nascimento:");
	scanf("%d",&nascimento);
	printf("Ano atual:");
	scanf("%d",&ano);
	idade =  ano - nascimento;
	mes =  idade * 12;
	d2050 = 2050 - nascimento;
	printf("idade: %d\nIdade em mes: %d\nIdade em 2050: %d\n",idade,mes,d2050);
	system("pause");
}
