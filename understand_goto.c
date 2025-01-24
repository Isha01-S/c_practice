/*Program to find whether a number is even or odd with goto*/
#include <stdio.h>
int main()
{
int n;
printf("Enter n:");
scanf("%d",&n);

	if(n%2==0)
		goto even;
	else
		goto odd;
	
	even: 
	printf("It is an even number");
		goto end;		

	odd:
	printf("It is an odd number");
		goto end;
	
	end:
	printf("\n");

return 0;
	}
