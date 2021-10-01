/*Trapezoidal Rule*/
#include<stdio.h>
#include<stdlib.h>
float f(float x)
{
	return 1/(1+x*x);}
main()
{	int n,i;
	float s=0.0,sum=0.0,a,b,h;	
	printf("Enter the values of lower limit & upper limit: ");
	scanf("%f%f",&a,&b);
	printf("Enter the number of intervals: ");
	scanf("%d",&n);
	/*Calculation the value of integral*/
	h=(b-a)/n;
	for(i=1;i<n;i++)
		s=s+f(a+(i*h));
	sum=h*(f(a)+f(b)+2*s)/2;
		/*Printing the value of integral value*/
		printf("The value is=%.3f",sum);
}
