/*Program to print star pyramid in which number of stars in a line is equal to that line number*/

#include <stdio.h>
int main()
{
	int n,i,j,a=2,p;
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
		

return 0;
}
