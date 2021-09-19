#include <stdio.h>
#include <stdlib.h>
int calculaD1(char cpf[]){
    int i = 0, soma = 0, decrescimo = 10;
    while(cpf[i] != '\0' && ((int ) cpf[i]) >= 48 && (int ) cpf[i] <= 57){
        soma  = soma + ((cpf[i] - '0') * decrescimo);
        decrescimo--;
        i++;
    }
    
    if(cpf[i] == '\0'){
        int resto = soma % 11;
        if(resto == 1 || resto == 0){
            return 0;
        }
        else{
            if(resto > 1 && resto < 11){
               return 11 - resto;
            }
        }
    }
    else{
        return -1;
    }
}

int calculaD2(char cpf[]){
    int i = 0, soma = 0, decrescimo = 11;
    while(cpf[i] != '\0' && ((int ) cpf[i]) >= 48 && (int ) cpf[i] <= 57){
        soma  = soma + ((cpf[i] - '0') * decrescimo);
        decrescimo--;
        i++;
    }

    if(cpf[i] == '\0'){
        int resto = soma % 11;
        if(resto == 1 || resto == 0){
            return 0;
        }
        else{
            if(resto > 1 && resto < 11){
               return 11 - resto;
            }
        }
    }
    else{
        return -1;
    }
}

int main(){
    char cpf[10];
    printf("Infome seu CPF sem os dois utimos digitos: ");
    fgets(cpf, 10, stdin);
    
    int d1 = calculaD1(cpf);
    if(d1 != -1){
        sprintf(&cpf[9],"%d", d1);
        cpf[10] = '\0';
        int d2 = calculaD2(cpf);
        if(d2 != -1){
            sprintf(&cpf[10],"%d",d2);
            cpf[11] = '\0';

            for(int i = 0; cpf[i] != '\0'; i++){
                printf("%c ", cpf[i]);
            }
            puts("");
        }
        else{
            printf("ERRO!\n");
        }
    }
    else{
        printf("ERRO!\n");
    }
    system("pause");
    return 0;
}