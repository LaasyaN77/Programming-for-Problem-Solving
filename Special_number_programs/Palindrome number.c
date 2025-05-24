//Check whether the number is palindrome or not
#include<stdio.h>
int main()
{
	int n, rem, result=0, palindrome;
	printf("\nEnter a number:");
	scanf("%d", &n);
	palindrome = n;
	while(n!=0)
	{
		rem = n%10;
		result = result*10+rem;
		n=n/10;
	}
	if(result==palindrome)
	printf("\nPalindrome number");
	else
	printf("\nNot a plaindrome number");
return 0;
}
