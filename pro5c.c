#include<stdio.h>
int main()
{
    printf("1+x/1!+x^2/2!+x^3/3!.... upto nth term\n");
    printf("Enter any number n and x respectively\n");
    int n,x,i=1;
    float sum=0.0,j=1.0,fact=1.0;
    scanf("%d",&n);
    scanf("%d",&x);
     do
     {
             
             sum=sum+j/fact;
             fact=fact*i;
             j=j*x;
             n=n-1;
             i=i+1;
     }
     while(n>0);
    printf("The sum is %f\n",sum);
}

