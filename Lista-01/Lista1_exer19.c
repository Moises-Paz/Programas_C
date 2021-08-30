#include <stdio.h>
#include <stdlib.h>
void main(){
float valor, gorjeta;
printf("Valor total:");
scanf("%f",&valor);
system("cls");
gorjeta = valor + (valor*10)/100;
printf("Valor total com gorjeta: R$%.2f\n",gorjeta);
system("pause");
}
