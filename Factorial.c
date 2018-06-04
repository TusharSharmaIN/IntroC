/* Program to Calculate Factorial of a Number	*/

#include<stdio.h>
void main()
{	int num,fact=1;
	
    printf("Enter Number : ");
	scanf("%d",&num);
    
    while(num>0)
    {   
        fact=fact*num;
        num--;
    }

    printf("Factorial of Num  : %d",fact);
}
