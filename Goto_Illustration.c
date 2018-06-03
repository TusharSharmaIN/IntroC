/*	Program to Illustrate goto	*/

#include<stdio.h>
void main()
{	int num=1;
		
	flag	:	num++;
	
	if(num<5)
		goto flag;

	printf("Num %d",num);			

}	
       
    
