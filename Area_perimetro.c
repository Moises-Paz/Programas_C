#include <stdio.h>
#include <math.h>

void calc_hexa(float l, float *area, float *perimetro)
{
	*area  = (3*(pow(l,2))*sqrt(3)) / 2;
	*perimetro = 6 * l; 
}
int main(){
	float lado, *area, *perimetro;
	float a =0, p=0;
	area = &a;
	perimetro = &p;
	
	do
	{
		printf("Infome o lado: ");
		scanf("%f", &lado);
		if(lado>=0)
		{
			calc_hexa(lado, area, perimetro);
			printf("Area = %f\nPerimetro = %f\n", a, p);
		}	
	}while(lado>=0);
	
	return 0;
}
