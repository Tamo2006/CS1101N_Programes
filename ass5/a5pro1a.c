#include<stdio.h>
double nth_power(int n , int x ) 
{
	double POW=1.0;
        int flag =0;
	if(n<0)
	{
		n=-n;
		flag=1;
	}
        	
       	while(n>0)
	{
		POW = POW*x;
		n--;
	}
	if( flag==1 )
	{
		return 1.0/POW ;
	}
	return POW;
		
}
int main()
{
	int N,X;
       	printf(" Enter the nth power ");
	scanf("%d",&N);
	printf(" Enter the value of X ");
	scanf("%d",&X);
        double result = nth_power(N,X);
	printf(" The nth power of X is %lf ", result);
        return 0;
}
