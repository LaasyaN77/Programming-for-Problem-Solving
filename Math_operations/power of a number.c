//Print the power of the given number
#include<stdio.h>
int main()
{
	int base, exp, result=1, i;
	printf("\nEnter the value of base:");
	scanf("%d", &base);
	printf("\nEnter the value of the exponent:");
	scanf("%d", &exp);
	for(i=1; i<=exp; i++)
	{
		result = result*base;
		printf("\nResult %d", result);
	 } 
	printf("\n%d to the power of %d = %d", base, exp, result);
	return 0;
}
