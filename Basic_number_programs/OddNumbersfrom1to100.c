//Print all the odd numbers from 1 to 100
#include<stdio.h>
void main()
{
	int a,i;
	printf("\nEnter a value between 1 to 100:");
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		if(i%2!=0)
		{
			printf("\n%d",i);
		}
	}
}
