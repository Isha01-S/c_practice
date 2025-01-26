/*Program to find LCM and  HCF of two numbers*/

#include <stdio.h>
int main()
{
int x,y,a,b;
printf("Enter two numbers x and y: ");
scanf("%d%d",&x,&y);

a=x, b=y;

while(a!=b){
	if (a<b){
		a+=x;
		}
	else {
		b+=y;
		}
	}
printf("LCM=%d\n",a);

a=x, b=y;

while(a!=b){
	if (a>b){
		a-=b;
		}
	else {
		b-=a;
		}
		 }
printf("HCF=%d\n",a);

return 0;
}
