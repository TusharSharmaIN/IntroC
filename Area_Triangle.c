/*Program to calculate area of a triangle */
#include<stdio.h>
void main()
{	int b,h;
	float area;
	printf("Enter the base : ");
	scanf("%d",&b);
	printf("Enter the height : ");
	scanf("%d",&h);
	area=0.5*b*h;
	printf("Area = %f",area);
}
