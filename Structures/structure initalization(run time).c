//Structure initalization during run time
#include<stdio.h>
void main()
{
	struct student
	{
		int rno;
		char name[20];
		int marks;
	}s;
	printf("\nEnter rno, name, marks: ");
	scanf("%d %s %d", &s.rno, &s.name, &s.marks);
	printf("\nRoll number: %d", s.rno);
	printf("\nName: %s", s.name);
	printf("\nMarks: %d", s.name); 
}
