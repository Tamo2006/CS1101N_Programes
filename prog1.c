#include<stdio.h>
int main()
{    int n;
     printf("how many elements? ");
     scanf("%d",&n);
     int arr[n];
     printf(" enter %d number of elements \n",n);
     for(int i=0;i<n;i++)
    {
       printf(" arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
      for(int i=0;i<n;i++)// this for loop is to find the maximum
      {
        if(arr[i]>max)
        { 
            max=arr[i];
        }
      }
      printf("The maximum is =  %d\n",max);

      int min = arr[0];
      for(int i=0;i<n;i++) // this for loop is to find the minimum
      {
        if(arr[i]<min)
        {
            min=arr[i];
        }
      }
      printf("The minimum is =  %d\n",min);

      int sum=0;
      for(int i=0;i<n;i++) // this for loop is to find the average
      {
        sum=sum+arr[i];
      }
       int avg=sum/n;
      printf("The average is =  %d\n",avg);
      
      int sumofodd=0;
       for(int i=0;i<n;i++) // this for loop is to find the sum of odd numbers inputted
      { 
        if(arr[i]%2!=0)
        {
        sumofodd=sumofodd+arr[i];
        }
      }
       printf("The sum of odd numbers is =  %d\n",sumofodd);
      
      
      printf("The numbers inputted in reverse order  :- ");
      for(int i=n-1;i>0;i--) // this for loop is to print the array contents in reverse order
      {
         printf("%d ",arr[i]);  
      }
      printf("\n");
      return 0;
}
    
    
