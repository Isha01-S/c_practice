/*Loops for some other pyramids*/

#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)//for number of lines
	{
		for(j=1;j<=n-i;j++)//for printing space
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)//for printing space
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

