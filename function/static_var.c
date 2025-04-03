/*Program to understand the use of static variable*/
#include <stdio.h>
void func(void);

int main()
{
    func();
    func();
    func();
    return 0;
}
void func(void)
{
    int a=10;
    static int b=10;
    printf("a=%d, b=%d\n",a,b);
    a++;
    b++;
}