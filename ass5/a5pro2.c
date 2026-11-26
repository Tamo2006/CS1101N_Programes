#include<stdio.h>
void reverse(char s[])
{       
        int length=0;
	char rs[100];
        
        for ( int i=0 ; s[i]!='\0' ; i++)
        {
             length++;
	}
	int j=0;
		for (int i=length-1 ; i >=0 ; i--)
		{
		     rs[j]=s[i];
		     j++;
	        }
        
	rs[j] = '\0';
        printf("%s\n", rs);
}
	
int main()
{    char str[100];
     printf("Enter a string: \n");
     fgets( str , sizeof(str), stdin);
     printf(" The entered string in reverse order :  ");
     reverse(str);
     return 0;

                
}
