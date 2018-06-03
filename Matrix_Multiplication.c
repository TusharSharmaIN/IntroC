/*	Multiplication of a Matrix	*/

#include<stdio.h>

int C[3][3];

void main()
{	int A[3][3], B[3][3],i=0,j=0,k=0,temp=0;
		
	printf("Enter Matrix A : ");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf(" %d",&A[i][j]);

	printf("\nEnter Matrix B : ");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf(" %d",&B[i][j]);	


	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{	for(k=0;k<3;k++)
				temp=temp + (A[j][k]*B[k][j]);
		
			C[i][j]=temp;
			temp=0;
		}


	printf("Resultant Matrix \n");


	for(i=0;i<3;i++)
	{	for(j=0;j<3;j++)
			printf(" %d",C[i][j]);
		printf("\n");	
	}	
	
	
}	
       
    
