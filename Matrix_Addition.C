/*  C Program to Add two Matrices of 3*3 */
#include <stdio.h>
#define SIZE 3

//Function to set a matrix
void setMat(int mat[][SIZE], int m, int n)
{
    int i,j;
    
    for(i=0;i<m;i++)
		  for(j=0;j<n;j++)
			  scanf(" %d",&mat[i][j]);
}

//function to display a matrix
void getMat(int mat[][SIZE], int m, int n)
{
    int i,j;
    
    for(i=0;i<m;i++)
	  {	  for(j=0;j<n;j++)
			    printf("%d ",mat[i][j]);
		    printf("\n");
    }
}

//driver function
int main()
{	
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
	  int i,j;
	
	  printf("Enter Matrix A : ");
    setMat(A, SIZE, SIZE);

	  printf("\nEnter Matrix B : ");
	  setMat(B, SIZE, SIZE);

	  for(i=0;i<SIZE;i++)
		  for(j=0;j<SIZE;j++)
		      C[i][j]=A[i][j] + B[i][j];

	  printf("\nResultant Matrix : \n");    
      getMat(C, SIZE, SIZE);
    return 0;
}
/*  Program ends Here */
