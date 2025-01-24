/*Program to find the day of the week from the given date*/
#include <stdio.h>
int main(){
int d,m,y,j,f,h,fh,day;

printf("Enter the date(dd/mm/yyyy):");
scanf("%d/%d/%d",&d,&m,&y);

j=d;//considering j=d initially.

switch(m-1){
	case 11: j+=30; //no break so that previous days can be added without complexity
	case 10: j+=31; 
	case 9: j+=30;
	case 8: j+=31;
	case 7: j+=31;
	case 6: j+=30;
	case 5: j+=31;
	case 4: j+=30;
	case 3: j+=31;
	case 2: j+=28;
	case 1: j+=31;
	}
	/*if the year is leap and the month is other than january and february*/
	if ((y%4==0&&y%100!=0)||y%400==0){
	if(m>2){
	j+=1;
	}
	}

	f=(y-1)/4;
	h=(y-1)/100;
	fh=(y-1)/400;
	day=(y+j+f-h+fh)%7;

	switch(day){
		case 0: printf("Saturday\n");
		break;
		case 1: printf("Sunday\n");
		break;
		case 2: printf("Monday\n");
		break;
		case 3: printf("Tuesday\n");
		break;
		case 4: printf("Wednesday\n");
		break;
		case 5: printf("Thursday\n");
		break;
		case 6: printf("Friday\n");
		break;
		}

return 0;
}
