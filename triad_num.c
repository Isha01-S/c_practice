/*Program to print traid numbers*/
#include <stdio.h>
int main(){
int m,n,p,num,d1,d2,d3,i,k;

for (num=100;num<=999/3;num++){//loop1
	for (i=num;i<=3*num;i+=num){//loop2(checks the digits of  number individually)
		k=i;            
		d1=k%10;k/=10;
		d2=k%10;k/=10;
		d3=k%10;
		if(d1==d2||d2==d3||d3==d1){
			goto nextnum;
			}
		}//loop2 ends

	for (m=num;m>0;m/=10){//loop3(checks the digits of all the numbers with each other)
		d1=m%10;
			for (n=2*num;n>0;n/=10){//loop4
			d2=n%10;
				for (p=3*num;p>0;p/=10){//loop5
					d3=p%10;
					if(d1==d2||d2==d3||d3==d1){
						goto nextnum;
						}
					}//loop5 ends
				}//loop4 ends

	}//loop3 ends
	printf("%d %d %d\n",num,2*num,3*num);
			
nextnum: ;
}//loop1 ends
return 0;
}
