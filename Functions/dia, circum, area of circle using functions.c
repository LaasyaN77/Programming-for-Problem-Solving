//To find the diameter, circumference and area of circle using functions
#include<stdio.h>
#include<math.h>
double dia(double);
double circum(double);
double ar(double);
void main()
{
	float r, diameter, circumference, area;
	printf("\nEnter the radius: ");
	scanf("%f", &r);
	diameter = dia(r);
	circumference = circum(r);
	area = ar(r);
	printf("\nDiameter of the circle is %lf", diameter);
	printf("\nCircumference of the circle is %lf", circumference);
	printf("\nArea of the circle is %lf", area);
}
double dia(double r)
{
	return (r*2);
}
double circum(double r)
{
	return (2*3.14*r);
}
double ar(double r)
{
	return (3.14*r*r);
}
