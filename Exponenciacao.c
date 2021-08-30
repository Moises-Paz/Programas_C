#include <stdio.h>
float pot(float x, float n)
{
	float resultado=1;
	if(n>=0)
	{
		for(int i=0;i<n;i++)
		{
			resultado*=x;
		}
	}
	else
	{
		for(int i=0;i<-n;i++)
		{
			resultado/=x;
		}
	}
	return resultado;
}
int main()
{
    float n1,n2;
    printf("Digite um valor para a Base: ");
    scanf("%f",&n1);
    printf("Digite um valor para o expoente: ");
    scanf("%f",&n2);
    printf("Resultado: %f",pot(n1,n2));
	return 0;
}
