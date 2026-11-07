#include<stdio.h>
int main()
{
    printf("1-2+3-4.... upto nth term\n");
    printf("Enter any number n \n");
    int n,x,j=1,sum1=0,sum2=0,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
       if(n%2==0)
       {
          sum1=sum1+n;
       }
       else
       {
           sum2=sum2+n;
       }
    sum=sum2-sum1;
     n=n-1;
} 
    printf("The sum is %d\n",sum);
    return 0;
}
