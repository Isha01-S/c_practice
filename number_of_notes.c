/*Program to find out number of notes required for a given amount*/
#include <stdio.h>
int main(){
int amount, choice, notes;

printf("Enter the amount:");
scanf("%d",&amount);

printf("Enter the value of notes from which you want to begin counting notes:");
scanf("%d",&choice);

switch(choice){

	case 100:
	notes=amount/100;
	printf("Number of 100 rupee notes:=%d\n", notes);
	amount%=100;//no break
	
	case 50:
	notes=amount/50;
	printf("Number of 50 rupee notes : %d\n",notes);
	amount%=50;

	case 20:
	notes=amount/20;
	printf("Number of 20 rupee notes :%d\n", notes);
	amount%=20;

	case 10:
	notes=amount/10;
	printf("Number of 10 rupee notes: %d\n", notes);
	amount%=10;

	case 5:
	notes=amount/5;
	printf("Number of 5 rupee notes:%d\n", notes);
	amount%=5;

	case 2:
	notes=amount/2;
	printf("Number of 2 rupee notes%d\n", notes);
	amount%=2;

	case 1:
	notes=amount/1;
	printf("Number of 1 rupee notes%d\n",notes);

	default:
	printf("Enter only valid values");
	break;
	}

	

return 0;
}
