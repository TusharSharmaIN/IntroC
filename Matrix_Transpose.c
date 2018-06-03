/*	Transpose of Matrix	*/

#include<stdio.h>

void main()
{	int A[3][3],i=0,j=0;
		
	printf("Enter Matrix A : ");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf(" %d",&A[i][j]);


	printf("Transpose :\n");


	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
			printf(" %d",A[j][i]);
		printf("\n");	
	}	
	
	
}	
       
    
