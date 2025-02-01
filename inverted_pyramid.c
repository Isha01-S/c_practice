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


//loop2
printf("\nloop2\n");

	for (i=1; i<=5; i++)
	{
		for (j=5; j>=i; j--)
		{
				if (i==4)
				{
				goto loop;
				}
			printf("%d",i);
		}
		printf("\n");
	}
loop:
	for(i=2; i>=1; i--)
	{
		for (j=1; j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
		goto end;
end:
	printf("\n");

return 0;
}
