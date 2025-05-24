//Find all the perfect numbers in a given interval using functions 
#include <stdio.h>
int range(int, int);
int perfect(int);
int main()
{
    int a, b;
    printf("Enter 2 values: ");
    scanf("%d%d", &a, &b);
    printf("\nPerfect numbers in the interval %d to %d are ", a, b);
    perfect(a);
    range(a, b);
    return 0;
}
int perfect(int n)
{
	int sum = 0, rem, i;
	for(i=1; i<n; i++)
	{
		rem = n%i;
		if(rem==0)
		{
			sum = sum+i;
		}
	}
	return (sum==n);
}
int range(int a, int b)
{	
	while(a <= b)
    {
        if(perfect(a))
        {
            printf("%d, ", a);
        }
        
        a++;
    }
}
