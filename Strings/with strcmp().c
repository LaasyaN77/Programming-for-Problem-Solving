//Compare two strings using strcmp()
#include<stdio.h>
#include<string.h>
void main()
{
	char a[20], b[20];
	printf("\nEnter the first string:");
	gets(a);
	printf("\nEnter the second string:");
	gets(b);
	if(strcmp(a,b)==0)
	printf("\n%s is equal to %s", a,b);
	else
	if(strcmp(a,b)>0)
	printf("\n%s is greater than %s", a,b);
	else
	printf("\n%s is greater than %s", a,b);
}
