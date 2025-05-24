//Finding the resultant matrix by matrix multiplication
#include<stdio.h>
#define MAX 50 
int main()
{
	int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX], arows, bcolumns, acolumns, brows, i, j, k, sum=0;
	printf("\nEnter the rows and columns of matrix a:");
	scanf("%d%d", &arows, &acolumns);
	
	printf("\nEnter the elements of matrix a:");
	for(i=0; i<arows; i++)
	{
		for(j=0;j<acolumns; j++)
		scanf("%d", &a[i][j]);
	}
	
	printf("\nEnter the rows and columns of matrix b:");
	scanf("%d%d", &brows, &bcolumns);
	
	if(brows!=acolumns)
	{
		printf("\nMatrix cannot be formed");
	}
	else
	{
		printf("\nEnter the elements of matrix b:");
		for(i=0; i<brows; i++)
		{
			for(j=0; j<bcolumns; j++)
			scanf("%d", b[i][j]);
		}
	}
	for(i=0; i<arows; i++)
	{
		for(j=0; j<bcolumns; j++)
		{
			for(k=0; k<brows; k++)
			{
				sum+=a[i][j]*b[i][j];
			}
			product[i][j]=sum;
			sum=0;
		}
	}
	printf("\nResultant matrix:");
	for(i=0; i<arows; i++)
	{
		for(j=0;  j<bcolumns; j++)
		{
			printf("%d", product[i][j]);		}
	}
	return 0;
}
