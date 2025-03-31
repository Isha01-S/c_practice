/*sum of squares of all odd numbers from 1 to 25*/
#include <stdio.h>
int func(void);
int main()
{
    printf("%d\n",func());
    return 0;
}
int func(void)
{
    int sum=0;
    for(int i=1; i<=25; i++)
    {
        if(i%2!=0)
        {
            sum+=i*i;
        }
    }
    return sum;
}