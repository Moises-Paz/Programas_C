#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void countingSort(int *vetor, int tamanho)
{
    // Passo 1: encontrar o maior elemento do vetor original
    int maior = vetor[0];
    for(int i=1;i<tamanho;i++) if(maior<vetor[i]) maior = vetor[i];
 
    // Passo 2: inicializar com 0 o vetor 'contagem' de tamanho 'maior+1' 
    int contagem[maior+1];
    for(int i=0;i<maior+1;i++) contagem[i] = 0;
 
    // Passo 3: preencher o vetor de contagem com a quantidade de vezes que cada número aparece no vetor de entrada
    for(int i=0;i<tamanho;i++) contagem[vetor[i]]++;
 
    // Passo 4: calcular a frequência cumulativa do vetor de contagem
    for(int i=1;i<=maior;i++) contagem[i] += contagem[i-1];
 
    // Passo 5: criar um vetor ordenado a partir do vetor 'contagem'
    int vetorOrdenado[tamanho];
    for(int i=0;i<tamanho;i++)
    {
        vetorOrdenado[contagem[vetor[i]]-1] = vetor[i];
        contagem[vetor[i]]--;
    }
 
    //passa o vetor ordenado para o vetor original
    for(int i=0;i<tamanho;i++) vetor[i]=vetorOrdenado[i];
}
 
void fillRand(int *array,int length)
{
    srand(time(NULL));
    for(int i=0;i<length;i++) array[i]=rand()%10;
}
 
int main()
{
    int tamanho=10,vetor[tamanho];
    fillRand(vetor,tamanho); //inicializa o vetor com numeros aleatorios

    puts("\nvetor original:");
    for(int i=0;i<tamanho-1;i++) printf("%d, ",vetor[i]);
    printf("%d\n",vetor[tamanho-1]);
 
    countingSort(vetor,tamanho);
 
    puts("\nvetor ordenado:");
    for(int i=0;i<tamanho-1;i++) printf("%d, ",vetor[i]);
    printf("%d\n\n",vetor[tamanho-1]);

    return 0;
}
