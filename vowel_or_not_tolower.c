/*Program to find vowel or not using tolower*/
#include <stdio.h>
#include <ctype.h>
int main()
{
char alpha;//alpha represents alphabet.
printf("Enter the alphabet:");
scanf("%c",&alpha);

alpha=tolower(alpha);//converts in lower case.

switch(alpha)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
	printf("The alphabet is a vowel.");
	break;

default:
	printf("It is not a vowel.");
	break;
	}
	
return 0;
}
