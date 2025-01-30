/*Program to print pyramids*/

#include <stdio.h>
int main()
{
	int n,i,j,a=2,p,k=1;
	p=a;
	printf("Enter the number of lines:");
	scanf("%d",&n);

/*Code for first pyramid*/
printf("\nFirst pyramid\n");
		for(i=1; i<=n; i++)//loop1 for number of lines 
		{
			for(j=1; j<=i; j++)//loop2 for number of stars
			{
				printf("*");

			}//loop2 ends

			printf("\n");//for next line.

		}//loop1 ends.

/*code for 2nd pyramid*/
printf("\nSecond pyramid\n");
		for (i=1; i<=n; i++)
		{
			for (j=1; j<=i; j++)
			{
				printf("%d",i);
			}
			printf("\n");
		}
/*Code for third pyramid*/
printf("\nThird pyramid\n");
		for (i=1; i<=n; i++)
		{
			for (j=1; j<=i; j++)
			{
				printf("%d",j);
			}
			printf("\n");
		}
/*Code for 4th pyramid*/
printf("\nFourth pyramid\n");
		for (i=1; i<=n; i++)
		{
			for (j=1; j<=i; j++)
			{
				printf("%d",a);
				a++;
			}
			printf("\n");
			p+=1;
			a=p;
		}
/*Code for 5th pyramid*/
printf("\nFifth pyramid\n");
		for (i=1; i<=n; i++)
		{
			for (j=1; j<=i; j++)
			{
				if ((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0))//if one of the i and j is odd one of them is even then it prints 1 otherwise 0 
				{
					printf("0");
				}
				else 
				{
					printf("1");
				}
			}
			printf("\n");
		}

/*Code for 6th pyramid*/
printf("\nSixth pyramid\n");
		for (i=1; i<=n; i++)
		{
			for (j=1; j<=i; j++)
			{
				printf("%d\t",k);
				k++;
			}
			printf("\n");
		}
		
/*Code for 7th pyramid*/
printf("\nSeventh Pyramid\n");
		for (i=n; i>=1; i--)
		{
			for (j=n; j>=i; j--)
			{
				printf("%d",j);
			}
			printf("\n");
		}

/*Code for 8th pyramid*/
printf("\nEighth Pyramid\n");
		for (i=n; i>=1; i--)
		{
			for (j=n; j>=i; j--)
			{
				printf("%d",i);
			}
			printf("\n");
		}

return 0;
}
