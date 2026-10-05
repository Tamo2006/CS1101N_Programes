:#include<stdio.h>
int main()
{
    int arr[10];
    int p=0,n=0;
    printf("Enter 10 numbers to be stored in an array\n");
    for( int i=0;i<10;i++) 
   {
       scanf("%d",&arr[i]);
       if(arr[i]>0)
       { 
          p++;
       }
       else if( arr[i]<0)
       {
         n++;
       }
   }
printf(" The array in reverse :- ");

   for( int i=9;i>=0;i--)
   {
        printf("%d ",arr[i]);
   }
  printf(" The number of positive terms %d\n ",p);
  printf(" The number of negative terms %d\n ",n);
  return 0;
}
