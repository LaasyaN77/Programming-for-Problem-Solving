//Print a multiplication table for a given number
#include<stdio.h>
int main()
{
	int n,i;
	printf("\nEnter a number:");
	scanf("%d", &n);
	printf("The multiplication table for %d is:", n);
	for(i=1; i<=n; i++)
	printf("\n%d * %d = %d", n, i, n*i);
	return 0;
}

