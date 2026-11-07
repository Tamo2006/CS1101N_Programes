#include<stdio.h>
int main()
{
	printf("Enter a string  ");
	char str[50];// the maximum length of the word could be 50
        int vu=0 ,va=0,ve=0,vi=0,vo=0;
        scanf("%49s",str);
	int i=0;
        while( str[i]!='\0')
	{
		if( str[i]== 'a'|| str[i]=='A')
		{
		va++;
		}
                else if( str[i]== 'e'|| str[i]=='E')
		{
		ve++;
		}
		else if( str[i]== 'i'|| str[i]=='I')
		{
		vi++;
		}
		else if( str[i]== 'o'|| str[i]=='O')
		{
		vo++;
		}
		else if( str[i]== 'u'|| str[i]=='U')
		{
		vu++;
		}

		i++;
	}
	printf( "each vowel cpunt in the string:- no. of a/A = %d \n", va);
	
	printf( " no. of e/E = %d \n" ,ve);
	printf( " no. of i/I = %d \n" ,vi);
	printf( " no. of o/O = %d \n" ,vo);
	printf( " no. of u/U = %d \n" ,vu);
}
