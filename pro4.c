#include<stdio.h>
int main()
{       char str[50];
	char temp;
	int len=0;
	int j=0;
	int ispalindrome=1;
	printf("Enter a string ");
	scanf("%49s",str);
	while( str[len]!='\0')
	{
		len++;
	}
       int left = 0;
       int right = len-1;
       while(left<right)       
       {
	       if(str[left]!=str[right])
	       {
		       ispalindrome=0;
		       break;
	       }                      
	       left ++;
	       right --;
       }
       if(ispalindrome==1)
       {
	       printf(" The string is palindrome ");
       }
       else
       {
	       printf( " The string is not palindrome ");
       }
       return 0;
}

