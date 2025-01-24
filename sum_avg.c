/*program to find the sum and average of 10 positive numbers*/

#include <stdio.h>
int main()
{
int n, i=1, sum=0;
float average;

while(i<=10)
{
printf("Enter the number:\n");
scanf("%d",&n);

if(n<0){
printf("Enter positive numbers only!!\t");
continue;
}
i++;
sum+=n;//sum=sum+n
}

average=sum/10.0;

printf("Sum=%d\t Average=%f\n", sum, average);
return 0;
}
