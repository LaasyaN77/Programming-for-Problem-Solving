//Find all the armstrong numbers in an interval using functions
#include <stdio.h>
#include<math.h>
int range(int, int);
int armstrong(int);
int main()
{
    int a, b;
    
    printf("Enter 2 values: ");
    scanf("%d%d", &a, &b);
	printf("\nArmstrong numbers in the interval %d to %d are", a, b);
    armstrong(a);
	range(a,b);
	return 0;
}
int armstrong(int a)
{
	int rem, sum = 0, q;
	q = a;
 
	while(a!=0)
	{
		rem = a%10;
		sum = sum + pow(rem, 3);
		a = a/10;
	}
	return (q==sum);
}
int range(int a, int b)
{
	while(a<=b)
	{
		if(armstrong(a)){
		
		
			printf("\n%d", a);
		}
		a++;
	}
}
