#include<stdio.h>
int main()
{       
	printf(" Enter two strings ");
	char W1[50],W2[50];
	int l1=0,l2=0;
	int issame=1;
	scanf("%49s %49s",W1,W2);
	while(W1[l1]!='\0')
	{
		l1++;
         }

	while(W2[l2]!='\0')
	{
		l2++;
         }
	if(l1!=l2)
	{ 
            issame=0;
	}
	else
	{ 
		for( int i=0;W1[i]!='\0';i++)
		{
			if(W1[i]==W2[i])
			{
				issame=1;
			}
			else 
			{
				issame=0;
			}
		}
	}
	if(issame==1)
	{
		printf("Both the strings are same");
	}
	if(issame==0)
	{
		printf("Both the strings are not same");
	}
}
