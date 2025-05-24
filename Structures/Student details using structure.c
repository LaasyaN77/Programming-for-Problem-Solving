//Program printing student details using structures
#include<stdio.h>
struct student
{
	char name[20];
	int Rno;
	int marks[3];	
}s;
int main()
{
	struct student s1, s2;
	int i;
	printf("\n Enter details of student 1: ");
	printf("\n Enter Name,Rno :");
	scanf("%s %d",&s1.name, &s1.Rno);
	printf("\n Enter 3 subjects Marks: ");
	for(i=0;i<3;i++)
	   scanf("%d",&s1.marks[i]);
	printf("\n Enter details of student 2: ");
	printf("\n Enter Name,Rno :");
	scanf("%s%d",s2.name,&s2.Rno);
	printf("\n Enter 3 subjects Marks: ");
	for(i=0;i<3;i++)
	   scanf("%d",&s2.marks[i]);
	printf("\n The student details are:");
	printf("\n----------------------------");
	printf("\n NAME \tRNO \tM1 \tM2 \tM3");
	printf("\n-----------------------------");
	printf("\n%s\t%d",s1.name,s1.Rno);
	for(i=0;i<3;i++)
	printf("\t%d",s1.marks[i]);
	printf("\n%s\t%d",s2.name,s2.Rno);
	for(i=0;i<3;i++)
	printf("\t%d",s2.marks[i]);
}

 
