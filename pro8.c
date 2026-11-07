#include<stdio.h>
#define R_D 3
#define C_D 3
int main()
{    int mat1[R_D][C_D];
     int mat2[R_D][C_D];
     int mat3[R_D][C_D];
     for(int i = 0; i<R_D; i++) 
     {
        for(int j = 0; j<C_D; j++) 
	{
            printf("Enter Element for matrix1 [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
     } 
      
     for(int i = 0; i<R_D; i++) 
     {
        for(int j = 0; j<C_D; j++) 
	{
            printf("Enter Element for matrix2 [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
     }   
     
     for(int i = 0; i<R_D; i++) 
     {
        for(int j = 0; j<C_D; j++) 
	{
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
     }
     printf(" The summation Matrix of the two Matrices is : \n");   
     for(int i = 0; i<R_D; i++)
     {
        for(int j = 0; j<C_D; j++) 
	{
            printf("%3d ", mat3[i][j]);
        }
        printf("\n");
    }
 }
