#include <stdio.h>
int max_of_four(int n1, int n2, int n3, int n4)
{
    int maior;
    if(n1>n2 && n1>n3 && n1>n4)
    {
        maior = n1;
    }
    else 
    {
        if(n2>n1 && n2>n3 && n2>n4)
        {
            maior = n2;
        }
        else {
            if(n3>n1 && n3>n2 && n3>n4)
            {
                maior =  n3;
            }
            else {
               maior = n4;
            }
        }
    }
    return maior;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
