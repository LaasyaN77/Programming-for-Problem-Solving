//Find all the prime numbers in a given interval using functions 
#include <stdio.h>
int range(int, int);
int prime(int);
int main()
{
    int a, b;
    
    printf("Enter 2 values: ");
    scanf("%d%d", &a, &b);
    printf("\nPrime numbers in the interval %d to %d are ", a, b);
    prime(a);
    range(a, b);
    return 0;
}
int range(int a, int b)
{	
	while(a <= b)
    {
        if(prime(a))
        {
            printf("%d, ", a);
        }
        
        a++;
    }
}
int prime(int num)   
{  
    int i;   
    for(i=2; i<=num; i++)    
    {    
        if(num % 2 == 0)    
        {  
            return 0;  
        }    
    }   
      return 1;   
}
