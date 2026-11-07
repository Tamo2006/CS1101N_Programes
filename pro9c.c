#include<stdio.h>
int main()
{ 
     printf("Enter number of rows \n");
     int row;
     scanf("%d",&row);
    int i,j,val=1;
    
    for(i=1; i<=row; i++)
    {
        if(i%2==0)
        {
          printf(" ");
        }
        else
        {
        for(j=1; j<=row-i; j++)
        {
            printf("  ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%2d",val++);
        }
       }

        printf("\n");
    }

    return 0;
}

