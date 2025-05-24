//Check whether the number is even or odd using functions
#include<stdio.h>
int eo(int);
int main()
{
	int num, c;
	printf("\nEnter a number: ");
	scanf("%d", &num);
	c = eo(num);
	return 0;
}
int eo(int num)
{
	if(num%2==0)
	printf("\n%d is even", num);
	else
	printf("\n%d is odd", num);
}
