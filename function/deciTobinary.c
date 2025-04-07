/*Write a function that coverts a decimal number to binary*/

#include <stdio.h>
long int binary(int num);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The binary of the given number is:%ld\n",binary(num));
    return 0;
}
long int binary(int num)
{
  long bin=0,rem=0,p=1;
    while(num!=0)
    {
        rem=num%2;
        bin=bin+rem*p;
        num/=2;
        p*=10;
    }
    return bin;
}