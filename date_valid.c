/*Write a program to find whether a date entered is valid or not. Assume that dates between years 1850 and 2050 are valid*/
#include <stdio.h>
int main()
{
int d,m,y;
int flag=1, is_leap=0;//flag tracks whether the date is valid if 1 valid if 0 invalid.
//is_leap tracks whether a year is leap year or not 1 means yes 0 means no.
printf("Enter date(dd/mm/yy):");
scanf("%d/%d/%d",&d,&m,&y);

if(y%100!=0&&y%4==0||y%400==0)
is_leap=1;

if(y<1850||y>2050||m<1||m>12||d<1||d>31)
flag=0;

else if(m==2){
//checks for number of days in feb.
if(d==30||d==31||(d=29&& !is_leap))
flag=0;
}
if(flag==0)
printf("not a valid date");
else
printf("valid date");

return 0;
}
