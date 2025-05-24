//Convert a string into lowercase without using library function
#include<stdio.h>
void main()
{
	char s[100];
	int i;
	printf("\nEnter a string: ");
	gets(s);
	for(i=0; s[i]!= NULL; i++)
	{
		if(s[i] >= 65 && s[i] <= 90)
		{
			s[i] = s[i] + 32;
		}
	}
	s[i]=NULL;
	printf("\nThe resultant string is %s", s);
 } 
