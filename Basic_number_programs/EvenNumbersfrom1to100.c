//Print all the even numbers from 1 to 100
#include<stdio.h>
void main()
{
	int a,i;
	printf("\nEnter a number between 1to100:");
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}
}
