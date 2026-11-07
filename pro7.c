#include<stdio.h>
int main()
{       char str1[100],str2[100],str3[200];
        printf("Enter first sentence ");
	scanf("%99[^\n]",str1);
	printf("Enter second sentence ");
	getchar();
	scanf("%99[^\n]", str2);
	
	int i=0;
        for ( i=0 ; str1[i]!='\0' ; i++)
        {
                str3[i]=str1[i];
                
        }
                  str3[i]=' ';

        for (  int j=0 ; str2[j]!='\0' ; j++)
        {
                str3[i+j+1]=str2[j];
	}
                
        printf(" The concatenation of two sentences are ");
        printf("%s", str3);
	return 0;
}
