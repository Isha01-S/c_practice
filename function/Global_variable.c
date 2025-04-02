/*Program to understand the use of Global variables*/
#include <stdio.h>
void func1();
void func2();
int a,b=6;
int main()
{
    printf("inside main: a=%d, b=%d\n",a,b);
    func1();
    func2();
    return 0;
}
void func1(){
    printf("Inside function 1: a=%d, b=%d\n",a,b);
}

void func2(){
    int a=8;
    printf("Inside function 2: a=%d, b=%d\n",a,b);
}
