/*Loops for some other pyramids*/

#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("Pyramid 1\n");
	for(i=1;i<=n;i++)//for number of lines
	{
		for(j=1;j<=n-i;j++)//for printing space
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)//for printing space
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("Pyramid 2\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");

	}

	printf("Pyramid 3\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("Pyramid 4\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	printf("Pyramid 5\n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("Pyramid 6\n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

	printf("Pyramid 7\n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	printf("Pyramid 8\n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*(n-i);j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("Pyramid 9\n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);
		}
		k=k-2;
		for(j=1;j<=i-1;j++)
		{
			printf("%d",k--);
		}
		printf("\n");
	}

	printf("Pyramid 10\n");

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		k=n;
		for(j=1;j<=i;j++)
		{
			printf("%d",k--);
		}
		k=k+2;
		for(j=1;j<=i-1;j++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}

	printf("\nPyramid 11\n");
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\nPyramid 12\n");
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		for(j=1;j<=i-1;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

	printf("\nPyramid 13\n");
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		k=1;
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);
		}
		for(j=1;j<=i-1;j++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}

	printf("\nPyramid 14\n");
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		k=n;
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);
		}
		k=k-2;
		for(j=1;j<=i-1;j++)
		{
			printf("%d",k--);
		}
		printf("\n");
	}


	printf("\nPyramid 15\n");
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		k=n;
		for(j=1;j<=i;j++)
		{
			printf("%d",k--);
		}
		k=k+2;
		for(j=1;j<=i-1;j++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}


	return 0;
}

