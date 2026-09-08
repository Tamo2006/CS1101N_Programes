#include<stdio.h>
int  main()
{
	int a=0;
	printf("enter any year\n");
		scanf("%d",&a);
	if(a%4==0&&a%100!=0||a%400==0)
	{
		printf("the year entered is a leap year\n");
	}
	else
	{
		printf("the year enetred is not a leap year\n");
	}
}

