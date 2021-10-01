/*Weddle's Rule*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f(float x)
{
	return x*exp(x);}
main()
{	int n,i;
	float s=0.0,a,b,h;	
	printf("Enter the values of lower limit & upper limit: ");
	scanf("%f%f",&a,&b);
	printf("Enter the number of intervals: ");
	scanf("%d",&n);
	/*Calculation the value of integral*/	
	h=(b-a)/n;
	if(n%6==0)
		{for(i=0;i<n;i=i+6)
		s=s+f((i)*h)+5*f((i+1)*h)+f((i+2)*h)+6*f((i+3)*h)+f((i+4)*h)+5*f((i+5)*h)+f((i+6)*h);
	s=0.3*h*s;
	/*Printing the value of integral value*/	
	printf("The value is=%.3f",s);}
	else
		printf("This rule is not applicable");
}
