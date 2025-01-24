/*Program to understand the continue statement in C*/
#include <stdio.h>
int main()
{
int n;
for(n=1;n<=5;n++)
{
if (n==3)
	continue;
	printf("%d\n",n);
	}
	printf("OUT OF LOOP\n");
	return 0;
	}

