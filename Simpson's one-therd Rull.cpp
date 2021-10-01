/*Simpson's one-therd Rule*/
#include<stdio.h>
#include<stdlib.h>
float f(float x)
{
	return x/(1+x);}
main()
{	int n,i;
	float s1=0,s2=0,sum,a,b,h;	
	printf("Enter the values of lower limit & upper limit: ");
	scanf("%f%f",&a,&b);
	printf("Enter the number of intervals: ");
	scanf("%d",&n);
	/*Calculation the value of integral*/
	h=(b-a)/n;
	if(n%2==0)
		{for(i=1;i<n;i++)
			{if(i%2==0)
				s1=s1+f(a+i*h);
			else
				s2=s2+f(a+i*h);}
		sum=h*(f(a)+f(b)+4*s2+2*s1)/3;
		/*Printing the value of integral value*/
		printf("The value is=%.3f",sum);}
	else
		printf("This rule is not applicable");
}
