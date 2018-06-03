/*	Menu based Program for a Calculator	*/

#include<stdio.h>
#include<stdlib.h>
void main()
{	char ch;
	int a,b;
	printf("Menu\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	
	printf("Enter Choice : ");
	scanf("%c",&ch);
	
	system("clear");
	
	printf("Enter two Numbers : ");
	scanf(" %d %d ",&a,&b);

	switch(ch)
	{
		case '1'	:	printf("Result %d\n",a+b);
					break;
		case '2'	:	printf("Result %d\n",a-b);
					break;
		case '3'	:	printf("Result %d\n",a*b);
					break;
		case '4'	:	printf("Result %f\n",(float)a/b);
					break;
	}
				

}	
       
    
