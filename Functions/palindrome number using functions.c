//Check whether the given number is a palindrome or not using functions
#include<stdio.h>
int palindrome(int);
int main()
{
	int n, m;
	printf("\nEnter a number: ");
	scanf("%d", &n);
	m=palindrome(n);
	return 0;
}
int palindrome(int n)
{
	int rem, rev=0, temp;
	temp = n;
	while(n!=0)
	{
		rem = n%10;
		rev = rev*10+rem;
		n/=10;
	}
	if(rev==temp)
	printf("\n%d is palindrome", temp);
	else
	printf("\n%d is not palindrome", temp);
}
