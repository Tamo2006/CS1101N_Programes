#include<stdio.h>
int main()
{    int n=0;
     printf("How many elements?");
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     { 
         scanf("%d",&arr[i]);
      }
      int max=arr[0];
      int min=arr[0];
      for(int i=0;i<n;i++)
       {
           if( arr[i]> max)
            {
              max = arr[i];
            }
           if( arr[i]< max)
            {
              min = arr[i];
            }
       }
      printf(" The maximum of the data items is %d \n",max);
      printf(" The minimum of the data items is %d \n",min);
}             
