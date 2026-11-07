#include<stdio.h>
int main()
{
    printf("2+4+6.... upto nth term\n");
    printf("Enter any number n \n");
    int n,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
       sum=sum+(n*2);
       n=n-1;
    }
           
    printf("The sum is %d\n",sum);
    return 0;
}
