#include<stdio.h>
int findMax(int r, int c, int a[r][c]) {
    int i, j;
    int max = a[0][0]; // Assume first element is the largest

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
       	{
            if (a[i][j] > max) 
	    {
                max = a[i][j];
            }
        }
    }
    return max;
}

int main() {
    int r, c, i, j, largest;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    largest = findMax(r, c, a);
    printf("Largest integer in the array is: %d\n", largest);

    return 0;
}
