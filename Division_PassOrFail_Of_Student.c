/* Program to decide division by percentage and marks of a student	*/
#include<stdio.h>
void main()
{   int a,b,c,d,e;
    float sum,per;
    printf("Enter marks : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=sum/5;
    
    if(per>=40)
    {   if(per>=90)
           printf("Division A");
        else if(per>80)
            printf("Division B");
        else if(per>60)
            printf("Division C");
        else
            printf("Division D");
    }
    else printf("Fail");
}
