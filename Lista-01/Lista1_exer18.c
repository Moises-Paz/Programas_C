#include <stdio.h>
#include <stdlib.h>
void main(){
float valor,valor2,valor3, p,p2,p3, desconto, desconto2, desconto3, d,d2,d3;
char nome[10];
char nome2[10];
char nome3[10];
printf("Nome do artigo:");
scanf("%s",nome);
printf("Valor:");
scanf("%f",&valor);
printf("Percentual de deesconto:");
scanf("%f",&p);
system("cls");
desconto = ((p*valor)/100);
d = valor - desconto;
printf("Nome: %s\nDesconto: R$%.2f\nTotal: R$%.2f\n",nome, desconto,d);
system("pause");
system("cls");

printf("Nome do artigo:");
scanf("%s",nome2);
printf("Valor:");
scanf("%f",&valor2);
printf("Percentual de deesconto:");
scanf("%f",&p2);
system("cls");
desconto2 = ((p2*valor2)/100);
d2 = valor2 - desconto2;
printf("Nome: %s\nDesconto: R$%.2f\nTotal: R$%.2f\n",nome2, desconto2,d2);
system("pause");
system("cls");


printf("Nome do artigo:");
scanf("%s",nome3);
printf("Valor:");
scanf("%f",&valor3);
printf("Percentual de deesconto:");
scanf("%f",&p3);
system("cls");
desconto3 = ((p3*valor3)/100);
d3 = valor3 - desconto3;
printf("Nome: %s\nDesconto: R$%.2f\nTotal: R$%.2f\n",nome3, desconto3,d3);
system("pause");
}
