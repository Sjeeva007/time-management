#include<stdio.h>
int main()
{
	char a;
	char s[90];
	
	printf("enter your name:\n");
	a=getchar();
	gets(s);
	printf("\n you entered A=%c name=%s",a,s);
}

