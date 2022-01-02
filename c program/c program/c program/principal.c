#include<stdio.h>
#include<math.h>
int main()
{
	float P,r,i,n,F;
printf("\nEnter principal amount:");
scanf("%f",&P);
printf("\nEnter rate of interest:");
scanf("%f",&r);
printf("\nEnter year of investment:");
scanf("%f",&n);
	i=r/100;
	F=P* pow (1+i,n);
	printf("F=%.2f",F);
	
}	
