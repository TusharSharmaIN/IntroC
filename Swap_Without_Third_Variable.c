/*	Program to Swap two variables without using third variable	*/
#include<stdio.h>
void main()
{   int a,b;  
    printf("Enter two variables : ");
    scanf("%d%d",&a,&b);
    printf("Unswapped Variable a=%d and b=%d\n",a,b);
    a=a+b; 
    b=a-b;
    a=a-b;
    printf("Swapped Variable a=%d and b=%d", a,b);
}
