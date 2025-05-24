//Check whether the number is armstrong or not
#include<stdio.h>
int main()
{
	int n, rem, sum=0, armstrong;
	printf("\nEnter a number:");
	scanf("%d", &n);
	armstrong=n;
	while(n!=0)
	{
		rem = n%10;
		sum =  sum+(rem*rem*rem);
		n=n/10;
	}
	if(armstrong==sum)
	printf("\nIt's an armstrong number");
	else
	printf("\nIt's not an armstrong number");
return 0;
}
