//Find the factorial of a given number using Recursion 
#include<stdio.h>
int factorial(int);
int main()
{
	int n,m;
	printf("\nEnter a number: ");
	scanf("%d", &n);
	m = factorial(n);
	printf("\nFactorial of %d is %d", n,m);
	return 0;
}
int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1);
}

