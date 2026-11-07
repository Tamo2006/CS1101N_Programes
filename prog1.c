#include<stdio.h>

 
int main()
{

    int n,m;
    int rem, rev=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
            rem=m%10;
            rev=(rev*10)+rem;
            m=m/10;
    }
    while(rev>0)
    {
       rem=rev%10;
       if(rem==0)
          printf("zero ");
          else if(rem==1)
          printf("one ");
         else if(rem==2)
          printf("two ");
         else if(rem==3)
          printf("three ");
         else if(rem==4)
          printf("four ");
         else if(rem==5)
          printf("five ");
         else if(rem==6)
          printf("six ");
         else if(rem==7)
          printf("seven ");
         else if(rem==8)
          printf("eight ");
         else if(rem==9)
          printf("nine ");
          rev=rev/10;
          }
    while (n > 0 && n % 10 == 0)
    {
        printf("zero ");
        n = n / 10;
    }

    return 0;
}
