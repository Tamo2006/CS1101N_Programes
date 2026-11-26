#include<stdio.h>
int sub(char s1[] , char s2[])// s1 is the main string s2 is the substring
{
   if( s2[0]=='\0'  )
   {
       return 1;
   }
   
   for (int  i=0 ; s1[i]!='\0' ; i++)
   {
     int j=0;
     while( s1[i+j]!='\0'  &&  s2[j]!='\0' && s1[i+j]==s2[j] )
     {
	     j++;
     }
     if( s2[j]=='\0'  )
     {
	     return 1;
     }
   }
   return 0;
}

   
	
int main()
{    char mainstr[100]; 
     char substr[100];
     printf("Enter the main string: ");
     fgets( mainstr , sizeof(mainstr), stdin);
     for ( int i=0; mainstr[i]!= '\0'; i++)
     {
     if ( mainstr[i]== '\n')
     {
	     mainstr[i]= '\0';
	     break;
     }
     }
     printf(" Enter the substring  : ");
     fgets( substr , sizeof(substr), stdin);
     for ( int i=0 ; substr[i]!= '\0' ; i++)
     {
     if ( substr[i] == '\n')
     {
	     substr[i]= '\0';
	     break;
     }
     }
     printf(" %d\n " , sub( mainstr , substr ));
     return 0;



}
