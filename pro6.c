#include<stdio.h>
int main()
{       char str[100];
	int c =0;
	printf("Enter a sentence as a string:- ");
	fgets( str ,sizeof(str) , stdin );
	for ( int i=0 ; str[i]!='\0' ; i++)
	{
	
		if ((str[i] == ' ' || str[i]=='\t' || str[i] =='\n')&& str[i+1]!=' ' && str[i+1]!='\t' && str[i+1]!='\n' && str[i+1]!='\0')
		{
			c++;
		       
		}
	}
	printf(" The number of words in the sentence is %d :- ", c+1);
}

