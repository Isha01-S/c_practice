/*Program to understand the working of Switch Statements*/

#include <stdio.h>
int main()
{
	int choice;
	printf("Enter your Choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("First\n");
			break;
		case 2:
			printf("second\n");
			break;
		case 3:
			printf("third\n");
			break;
		
		default: 
			printf("Wrong Choice\n");
			break;

	}
	return 0;
}
