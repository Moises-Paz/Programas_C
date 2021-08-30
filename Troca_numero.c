#include <stdio.h>
#include <stdlib.h>

 void troca(int *A, int *B){
 int t;
 t = *A;
 *A = *B;
 *B = t;
}
 int main (){
int x,y;
    printf("Digite o primerio numero: ");
    scanf("%i",&x);
    printf("Digite o segundo numero: ");
    scanf("%i",&y);
    printf("\nO valor original do primeiro numero = %i\nValor original do segundo numero = %i\n",x,y);
    printf("---------------------------------------\n");
    troca(&x,&y);
    printf("O valor trocadon do primeiro numero = %i\nValor trocado so segundo numero = %i\n", x,y);

    return 0;
 }
