#include <stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    int vetor[num];
    for(i = 0; i < num; i++) {
        scanf("%d", &vetor[i]);
    }

    int vetorInverso[num];
    for(int x=0; x<num; x++)
    {
        vetorInverso[x] = vetor[num-1-x];
    }

    for(i = 0; i < num; i++)
        printf("%d ", vetorInverso[i]);
    return 0;
}
