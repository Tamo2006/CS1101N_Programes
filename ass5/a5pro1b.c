#include<stdio.h>
void swap(int *a ,int *b)
{
      int temp = *a;
      *a = *b;
      *b = temp;
      
}

int main()
{
 	int x,y;
	printf("Enter first number x= ");
	scanf("%d",&x);
	printf("Enter second number y= ");
	scanf("%d",&y);
        swap(&x,&y);
	printf(" swapping x = %d y = %d ", x,y);
	return 0;
}

