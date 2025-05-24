//Print sum of all even numbers
#include<stdio.h>
int main()
{
	int n, i, sum=0;
	printf("\nEnter a number:");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		printf("\n%d", i);
		sum=sum+1;
	}
	printf("\nSum = %d", sum);	
	return 0;
}
