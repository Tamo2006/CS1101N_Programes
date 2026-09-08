#include<stdio.h>

int main()
{
	char x;
	printf("enter a character:- ");
	scanf("%c",&x);
	if(x=='a'||x=='A'||x=='e'||x=='E'||x=='I'||x=='i'||x=='o'||x=='O'||x=='U'||x=='u')
		printf(" The character entered is a vowel\n");
	
	else 
	
		printf(" The character enetred is a consonant\n");
	return 0;
}
