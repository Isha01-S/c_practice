/*Program to print star pyramid in which number of stars in a line is equal to that line number*/

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of lines:");
	scanf("%d",&n);

		for(int i=1; i<=n; i++)//loop1 for number of lines 
		{
			for(int j=1; j<=i; j++)//loop2 for number of stars
			{
				printf("*");

			}//loop2 ends

			printf("\n");//for next line.

		}//loop1 ends.
		

return 0;
}
