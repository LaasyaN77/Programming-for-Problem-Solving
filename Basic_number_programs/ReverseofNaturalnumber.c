//Print reverse of a number
#include<stdio.h>
void main()
{
	int num, i;
	printf("\nEnter a number:");
	scanf("%d", &num);
	i=num;
	while(i>=1)
	{
		printf("\n%d", i);
		i--;
	}
	
}
