//Check whether the number is a strong number
#include<stdio.h>
int main()
{
	int n, i, result=0, rem, fact, strong;
	printf("\nEnter a number:");
	scanf("%d", &n);
	strong=n;
	while(n!=0)
	{
		rem = n%10;
		fact=1;
		for(i=1; i<=rem; i++)
		{
			fact = fact*i;
		}
		result=result+fact;
		n=n/10;
	}
	if(result==strong)
	printf("\nStrong number");
	else
	printf("\nNot a strong number");
return 0;
}
