
#include<stdio.h>
int FindGCD(int x, int y)
{
    int i,j,rem1,rem2,GCD;
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
                    GCD=i;
                    return GCD;
                }
            }
        }

    }

}
int main()
{       int a,b,G;
	printf("Enter two numbers:- ");
	scanf("%d %d",&a,&b);
	G = FindGCD(a,b);
	printf(" The Greatest common divisor of two numbers is : %d\n ",G);
}

