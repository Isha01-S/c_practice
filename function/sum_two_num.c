/*Program to find the sum of two numbers */

#include<stdio.h>
int sum(int x, int y);
int main()
{
    int a= 10,b=20,k;
    k=sum(a,b);
    printf("%d\n",k);

    k= sum(4,5);
    printf("%d\n",k);

    k= sum(a+b,b*2);
    printf("%d\n",k);
    
    return 0;
}

int sum (int x, int y)
{
    int s;
    s=x+y;
    return s;
}