/*	Program to Print Fibonacci Series	*/
#include<stdio.h>
void main()
{	int num,a=0,b=1,sum,i;
	
    printf("Enter Number : ");
	scanf("%d",&num);
    
    if(num<2)
    printf("%d  ",a);
    else 
    printf("%d  %d  ",a,b);
   
    for(i=1;i<=num-2;i++)
    {   
        sum=a+b;
        printf("%d  ",sum);
        a=b;
        b=sum;
    }
   
	   	
}
