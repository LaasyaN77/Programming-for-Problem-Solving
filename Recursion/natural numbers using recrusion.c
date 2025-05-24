//Print all natural numbers 1 to n using recrusion
#include<stdio.h>
void natural(int);
int main()
{
	int n;
	printf("\nEnter the number of terms: ");
	scanf("%d", &n);
	printf("\nNatural numbers from 1 to %d: ", n);
    natural(n);
	return 0; 
}
void natural(int n)
{
	if(n)
	natural(n-1);
	else
	return;
	printf("\n%d", n);
}
