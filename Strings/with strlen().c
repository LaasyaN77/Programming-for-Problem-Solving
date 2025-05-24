//Print the length of the string
#include<stdio.h>
#include<string.h>
void main()
{
	int s[10];
	int length;
	printf("\nEnter a string: ");
	gets(s);
	length = strlen(s);
	printf("\nThe length of the string is %d", length);
}
