/*Program to perform arithmetic operations on integers*/

#include <stdio.h>
int main()
{
int a,b;
char operation;
printf("Calculator for two numbers. perform your operations:");


scanf("%d",&a);
getchar(); //clears the input buffer.

scanf("%c",&operation);

scanf("%d",&b);

switch(operation)
	{
case '+':
	printf("%d",a+b);//performs addition
	break;
case '-':
	printf("%d",a-b);//performs subraction
	break;
case'*':
	printf("%d",a*b);//performs multiplication
	break;
case '/':
	printf("%d",a/b);//performs division
	break;
case '%':
	printf("%d",a%b);//modulo operation
	break;

default: 
	printf("Enter a valid operation!");//tells the user to enter a valid operation.
	break;
	}
return 0;
}
