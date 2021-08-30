#include <stdio.h>
#include <stdlib.h>

void fatorial(int x, int i, int *f){
     for(i = 1; i <= x; i++){
        *f = *f * i;
     }
}

int main(){

 int x, i, f = 1;
 printf("Digite um numero inteiro positivo");
 scanf("%d",&x);
 fatorial(x,i,&f);
 printf("O fatorial de %d e: %d\n",x,f);
 system("pause");
return 0;

}
