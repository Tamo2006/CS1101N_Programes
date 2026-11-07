#include<stdio.h>
int main()
{
    printf("1+x+x^2+x^3.... upto nth term\n");
    printf("Enter any number n and x respectively\n");
    int n,x,j=1,sum=0;
    scanf("%d",&n);
    scanf("%d",&x);
     do
     { 
	    
	     sum=sum+j;
	     j=j*x;
	     n=n-1;
     }
     while(n>0);
    printf("The sum is %d\n",sum);
}
