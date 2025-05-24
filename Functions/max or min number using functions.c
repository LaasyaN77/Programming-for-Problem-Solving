//To find the maximum and minimum of two numbers using functions
#include<stdio.h>
int max(int, int);
int min(int, int);
void main()
{
	int n1, n2, maximum, mininum;
	printf("\nEnter two numbers: ");
	scanf("%d%d", &n1, &n2);
	max(n1, n2);
	min(n1, n2);
	printf("\nThe maximum number is %d", max(n1, n2));
	printf("\nThe minimum number is %d", min(n1, n2));
}
int max(int n1, int n2)
{
	if(n1>n2)
	return n1;
	else 
	return n2;
}
int min(int n1, int n2)
{
	if(n1>n2)
	return n2;
	else
	return n1;
}

