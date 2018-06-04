/*Program to Swap two Variables With using third variable	*/
#include<stdio.h>
void main()
{   int a,b,c;  
    printf("Enter two variables : ");
    scanf("%d%d",&a,&b);
    printf("Unswapped Variable a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Swapped Variable a=%d and b=%d", a,b);
}
