/*program to find whether an alphabet is vowel or consonant*/

#include <stdio.h>

int main()
{
char alpha;
printf("Enter the alphabet:");
scanf("%c",&alpha);

switch(alpha)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("The alphabet is a vowel.");//used fall thru here.
break;

default:
printf("The alphabet is not  a vowel.");
break;}

return 0;
}
