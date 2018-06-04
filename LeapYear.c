/*	Program to Check whether an Year is a Leap Year or Not	*/

#include<stdio.h>
void main()
{	int num;
	printf("Enter the year : ");
	scanf("%d",&num);
	
	if(num%100==0)
	{	if(num%400==0)	
			printf("Leap Year");
		else printf("Not a Leap Year");
	}
	else 
	{	if(num%4==0)
			printf("Leap Year");
		else printf("not a Leap Year");
	}
}

	
