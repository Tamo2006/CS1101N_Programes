#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	printf("enter the first integer:- ");
		scanf("%d",&a);
        printf("enter the second integer:- ");
	        scanf("%d",&b);
	printf("enter the third integer:- ");
	        scanf("%d",&c);
		if(a>b)
		{
			if(a>c)
				printf("the largest integer is %d\n:- ",a);
			else
			{
				printf("the largest integer is %d\n:- ",c);
			}
		}
		else if(b>c)
		{
			printf("the largest integer is %d\n:- ",b);
		}
		else
		{
			printf("the largest integer is %d\n:- ",c);
		}
}
