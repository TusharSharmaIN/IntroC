/* Program to decide greatest of three number	*/
#include<stdio.h>
void main()
{   int a,b,c;
    printf("Enter three Numbers : ");  
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b&&a>c)
        printf("A is Greater");
    else if(b>c&&b>a)
        printf("B is Greater");
    else if(c>a&&c>b)
        printf("C is Greater");
    else if (a==b && a==c)
        printf("Equal");
    else if printf("Ambiguous Situation");
}
