#include<stdio.h>
#include<math.h>
int main()
{
	 int a=0;
	 int b=0;
	 int c=0;

	
	 printf(" a quadratic equation looks like ax^2+bx+c");
	 printf(" enter the coefficients a,b,c ");
	 scanf("%d\n",&a);
	 scanf("%d\n",&b);
	 scanf("%d",&c);
	  float x1;
	  float x2;
		 printf(" The roots of the quadratic equation are :- \n :");
               
			 x1= (-b+sqrt(b*b-4*a*c))/(2*a) ;
		         x2= (-b-sqrt(b*b-4*a*c))/(2*a) ;
                printf("%f\n",x1 );
	        printf("%f\n",x2 );	
		return 0;
}

