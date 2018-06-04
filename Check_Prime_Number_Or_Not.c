/Program to Check whether a number is Prime Number or Not	*/
#include<stdio.h>
void main()
{	int num,a;
	
    printf("Enter Number : ");
	scanf("%d",&num);
    
    for(a=2;a<(num/2);a++)
    {    
            if((num%a)==0)
            {   printf("Not Prime");    
                break;
            }
            else 
            {   printf("Prime");
                break;
            } 
    }   	
}
