/*Program to get difference of two dates in years months and days*/
#include <stdio.h>
int main()
{
int d1,d2,d,m1,m2,m,y1,y2,y;
printf("Enter the first date:");
scanf("%d/%d/%d",&d1,&m1,&y1);
printf("Enter the second date:");
scanf("%d/%d/%d",&d2,&m2,&y2);

if (d2<d1)
{
if(m2==3)
{
 if (y2%100!=0&&y2%4==0||y2%400==0)
 	d2=d2+29;
 else 
 	d2=d2+28;
	}
else if(m2==5||m2==7||m2==10||m2==12)
	d2=d2+30;
else 
	d2=d2+31;
m2=m2-1;
}
if (m2<m1)
{
	y2=y2-y1;
	m2=m2+12;
	}
y=y2-y1;
m=m2-m1;
d=d2-d1;
printf("The difference is %d years %d months and %d days",y,m,d);
return 0;
}
