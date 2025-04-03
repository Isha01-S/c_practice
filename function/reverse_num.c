/*#include <stdio.h>
int reverse_num(int n);
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    printf("The reverse num of %d is %d\n", n, reverse_num(n));
    return 0;
}

int reverse_num(int n)
{
    int num, rem=0,reverse_num=0,p=1;
    num=n;
    while(num>0)
    {
        num/=10;
        p*=10;

    }
    p=p/10;
    printf("p=%d\n",p);
    num=n;
    while(num>0)
    {
        rem=num%10;
        reverse_num+=rem*p;
        p/=10;
        num/=10;
    }
    return reverse_num;
}*/

#include<stdio.h>
int reverse(int n);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("%d\n",reverse(num));
    return 0;
}

int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}