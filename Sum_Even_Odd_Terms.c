/* Program to Calculate Sum of even and odd terms upto a number	*/

#include<stdio.h>
void main()
{	int num,i,se=0,so=0;
	
    printf("Enter Number : ");
	scanf("%d",&num);
    
    for(i=1;i<num;i++)
    
    {   if(i%2==0)
            se=se+i;
        else
            so=so+i;  
              
    }

    printf("Sum of odd terms upto Num  : %d", so);
    printf("Sum of even terms upto Num : %d", se);

}
