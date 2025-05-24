//Add two number without the plus operator
#include<stdio.h>
int main()
{
	int x, y;
	printf("\nEnter two numbers:");
	scanf("%d %d", &x, &y);
	while(y!=0)
	{
		x++;
		y--;
	}
	printf("Sum of the two numbers is %d", x);
	return 0;
}
