/*Program to find the sum of two numbers using function */
#include <stdio.h>
int sum(int x, int y);
int main()
{
    int a, b,s;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    s= sum(a,b);
    printf("\nsum is %d:\n", s);
    return 0;
}

int sum(int x, int y)
{
    int s;
    s=x+y;
    return s;
}