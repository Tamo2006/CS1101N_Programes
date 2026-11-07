#include<stdio.h>
int main()
{ printf("Enter number of rows \n");
     int row;
     scanf("%d",&row);
    int i,j;
    //int val=1;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row-i; j++)
        {
            printf("   ");
        }

        for(j=1; j<=i;j++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}
