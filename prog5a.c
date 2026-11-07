#include<stdio.h>
int main()
{
    printf("1+2+3+....+n\n");
    printf("Enter any number n\n");
    int n;
    scanf("%d",&n);
    int sum = (n*(n+1))/2 ;
    printf("The sum is %d",sum);
}

