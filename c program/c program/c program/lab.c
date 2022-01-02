#include<stdio.h>
#include<string.h>
enum {false,true};
#define add 1
#define sub 1
#define mul 2
#define duv 2
#define exp 3
int top=0;
void push(char[],char);
char pop(char[]);
int stack_empty();
void main()
{
	char s[100];
	void i2p(char []);
	printf("enter the infix expression:");
	scanf("%s",s);
	printf("The postfix expression is :");
	i2p(s);
}
