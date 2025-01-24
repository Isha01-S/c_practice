/*A menu driven program using infinite loop and switch*/
#include <stdio.h>
#include <stdlib.h>//for exit function.
int main()
{
int choice;

while(1)
	{
	printf("1.Create database\n");
	printf("2.Insert record\n");
	printf("3.Modify a record\n");
	printf("4.Delete a record\n");
	printf("5.Display all records\n");
	printf("6.For exit\n");

	printf("Enter your choice:");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1: printf("database created\n");
	break;
	case 2: printf("record inserted\n");
	break;
	case 3: printf("record modified\n");
	break;
	case 4: printf("record deleted\n");
	break;
	case 5: printf("display all the records\n");
	break;
	case 6: exit(1);

	default: printf("wrong choice\n");
	break;
	}//end of switch.
	}//end of while.
return 0;
}
