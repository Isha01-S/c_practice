/*Program to illustrate that every function has an address and how to access that address*/

#include<stdio.h>
void func1();
int main(){
    printf("address of main() is: %p\n",main);
    printf("address of func1() is: %p\n",func1);
    return 0;
}
void func1(){
    printf("C is my favourite language.");
}