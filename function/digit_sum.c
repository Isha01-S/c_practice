/*Program to find the digits some of any number*/
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("sum of digits is %d\n", sum(n));

    return 0;
}
int sum(int n)
{
    int s=0;
   
    
    while(n>0)
    {
        
        s+=n%10;
        n=n/10;
    }
    return s;
    
}