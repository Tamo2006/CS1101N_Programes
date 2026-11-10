
#include<stdio.h>
int main()
{
    int x,y,i,j,rem1,rem2;
    printf("Enter two numbers");
    scanf("%d",&x);
    scanf("%d",&y);
    if (x<1)
    {
            x=-x;
    }

    if (y<1)
    {
            y=-y;
    }

    for(i=x; i>0; i--)
    {
        for(j=y; j>0; j--)
        {
            rem1=x%i;
            rem2=y%j;
            if(rem1==0&&rem2==0)
            {   if(i==j)
                {
                    printf("GCD is %d",i);
                    return 0;
                }
            }
        }

    }

}
