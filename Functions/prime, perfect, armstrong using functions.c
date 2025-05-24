//Check whether the number is prime, armstrong or perfect using functions
#include<stdio.h>
int prime(int);
int armstrong(int);
int perfect(int);
int main()
{
	int n;
	printf("\nEnter a number: ");
	scanf("%d", &n);
	if(prime(n))
	printf("\n%d is a prime number", n);
	else
	printf("\n%d is not a prime number", n);
	if(armstrong(n))
	printf("\n%d is a armstrong number", n);
	else
	printf("\n%d is not an armstrong number", n);
	if(perfect(n))
	printf("\n%d is a perfect number", n);
	else
	printf("\n%d is not a perfect number", n);
	return 0;
}
int prime(int n)
{
	int i;
	for(i=2; i<=n; i++)
	{
		if(n%2==0)
		return 0;
	}
	return 1;	
}
int armstrong(int n)
{
	int sum = 0, rem, q, digits;
	q = n;
	digits = (int) log10(n) + 1;
	while(n!=0)
	{
		rem = n%10;
		sum = sum + pow(rem, digits);
		n = n/10;
	}
	return (sum==q);
}
int perfect(int n)
{
	int sum = 0, rem, i;
	for(i=1; i<n; i++)
	{
		rem = n%i;
		if(rem==0)
		{
			sum = sum+i;
		}
	}
	return (sum==n);
}
	

