#include<stdio.h>
int main()
{
	int a,x,z;
	float b;
	char c; 
	char s[80];
	
	

    printf("Enter your name:");
    gets(s);
	printf("Enter sex (M/F):");
  	scanf("%c",&c);	
     printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	x=a+z;
	printf("Add the two value:%d %d %d",a,x,z);
	printf("\nHi %s you are %c",s,c);
	/*printf("\nyou entered a=%d b=%f",a,b);*/
}
