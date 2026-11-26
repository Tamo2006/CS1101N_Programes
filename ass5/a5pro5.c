#include <stdio.h>
void findMax(int r, int c, int a[r][c])
{
    int rowMax[r], colMax[c];
    int i, j, max;

    for (i = 0; i < r; i++)
    {
        max = a[i][0]; 
        for (j = 1; j < c; j++)
       	{
            if (a[i][j] > max) 
	    {
                max = a[i][j];
            }
        }
        rowMax[i] = max;
    }
    for (j = 0; j < c; j++) 
    {
        max = a[0][j]; 
        for (i = 1; i < r; i++)
       	{
            if (a[i][j] > max) 
	    {
                max = a[i][j];
            }
        }
        colMax[j] = max; 
    }

    
    printf("\nLargest in each row: ");
    for (i = 0; i < r; i++)
    {
        printf("%d ", rowMax[i]);
    }

    printf("\nLargest in each column: ");
    for (j = 0; j < c; j++) 
    {
        printf("%d ", colMax[j]);
    }
    printf("\n");
}

int main()
{       int r,c,i,j;
	printf(" Enter the number of rows: \n");
	scanf("%d",&r);

	printf(" Enter the number of columns: \n");
	scanf("%d",&c);
        int arr[r][c];
    printf("Enter array elements:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
	{
            scanf("%d", &arr[i][j]);
        }
    }
   printf("The matrix is\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
	{
            printf("%3d", arr[i][j]);
        }
	printf("\n");
    }
    
    findMax(r,c,arr);

    return 0;
}
