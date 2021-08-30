#include <stdio.h>
int recursion(long int n, int k)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return recursion(n/10, k) + (n%10 == k);
	}
}
int main(){
	long int n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	printf("%d",recursion(n, k));
	
	return 0;
}
