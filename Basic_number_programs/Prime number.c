//Check whether the number is prime
#include<stdio.h>
int main()
{
	int i, n, flag=0; 
	printf("\nEnter a number:");
	scanf("%d", &n);
	for(i=2; i<=n; i++)
	{
		if(n%i==0)
		flag=1;
		break;
	}
	if(flag==0)
	printf("\n%d is a prime number", n);
	else
	printf("\n%d is not a prime number", n);
	return 0;
}
