//Calculate the power of any number using recursion 
#include<stdio.h>
int power(int,int);
void main()
{
	int m,n;
	printf("\nEnter the value of base: ");
	scanf("%d", &m);
	printf("\nEnter the value of exponent: ");
	scanf("%d", &n);
	printf("\n%d to the power of %d = %d", m, n, power(m,n));	
}
int power(int m, int n)
{
	if(n==0)
	return 1;
	else if(m==1 && n==1)
	return 1;
	else
	return m* power(m, n-1);
}
