#include <stdio.h>
 #include <locale.h>

int main (){

   setlocale(LC_ALL,"");
   int num, i,
   resultado = 0;

   printf("Digite um numero aqui:");
   scanf("%d", &num);
   for(i = 2; i <= num / 2; i++){
    if (num % i == 0){
        resultado++;
        break;
   }
   }
    for(i = 3; i <= num / 3; i++){
        if (num % i == 0){
        resultado++;
        break;
    }
    }
     for(i = 5; i <= num / 5; i++){
        if (num % i == 0){
        resultado++;
        break;
     }
     }
      for(i = 7; i <= num / 7; i++){
        if (num % i == 0){
        resultado++;
        break;
      }
      }
       for(i = 11; i <= num / 11; i++){
        if (num % i == 0){
        resultado++;
        break;
       }
       }
        for(i = 13; i <= num / 13; i++){
            if (num % i == 0){
        resultado++;
        break;
        }
        }
         for(i = 17; i <= num / 17; i++){
            if (num % i == 0){
        resultado++;
        break;
         }
         }
          for(i = 19; i <= num / 19; i++){
            if (num % i == 0){
        resultado++;
        break;
          }
          }
           for(i = 23; i <= num / 23; i++){
            if (num % i == 0){
        resultado++;
        break;
           }
           }
            for(i = 29; i <= num / 29; i++){
            if (num % i == 0){
        resultado++;
        break;
            }
            }




    if (resultado == 0)
        printf("%d é um numero primo \n", num);
    else
        printf("%d não é um numero primo \n", num);

    return 0;
}
