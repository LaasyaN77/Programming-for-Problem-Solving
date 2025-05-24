//Program printing student details using array of structures
#include<stdio.h>
struct student 
{
	char name[20];
	char Rno;
	int marks[3];
};
int main()
{
	struct student s[30];
	int i,j,n;
	printf("\nEnter the number of students: ");
	scanf("%d", &n);	
	for(i=0; i<n; i++)
	{
	printf("\nEnter details of student %d", i+1);
	printf("\nEnter student name and roll number: ");
	scanf("%s %d", &s[i].name, &s[i].Rno);
	printf("\nEnter 3 subject marks: ");
	for(j=0; j<3; j++)
	scanf("%d",&s[i].marks[j]);
    }
    printf("\nThe student details are");
    printf("\n----------------------------");
    printf("\n NAME \tRNO \tM1 \tM2 \tM3");
    printf("\n-----------------------------");
    for(i=0; i<n; i++)
    {
	printf("\n%s\t%d", s[i].name, s[i].Rno);
	for(j=0; j<3; j++)
	printf("\t%d", s[i].marks[j]);
    }
}
    
