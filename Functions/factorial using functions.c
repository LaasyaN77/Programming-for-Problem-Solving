//Factorial of a number using functions
#include<stdio.h>
int factorial(int);
int main()
{
	int n, fact;
	printf("\nEnter a number: ");
	scanf("%d", &n);
	fact = factorial(n);
	printf("\nFactorial of %d is %d", n, fact);
}
int factorial(int n)
{
	int i, fact=1;
	for(i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	return fact;
}
