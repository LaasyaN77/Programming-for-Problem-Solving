//Print the length of the string without using library function
#include<stdio.h>
void main()
{
	char s[10];
	int length, i;
	printf("\nEnter a string: ");
	gets(s);
	for(i=0; s[i]!=NULL; i++)
	length++;
	printf("\nThe length of the string is %d", length);
}
