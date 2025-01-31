/*Program to print different types of inverted pyramids*/

#include <stdio.h>
int main()
{
int n;
int i,j;

printf("Enter the number of rows:");
scanf("%d",&n);

//loop1
printf("\nloop 1\n\n");

	for (i=1; i<=n; i++)
	{
		for (j=n; j>=i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;
}
