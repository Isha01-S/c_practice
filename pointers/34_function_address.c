/*passing function's address as an argument to other function*/

#include<stdio.h>
void func(char,void (*fp)(float));
void fun1(float);
int main(){
    printf("function main() is called.\n");
    func('a',fun1);
    return 0;
}

void func(char b,void (*fp)(float)){
    printf("function func() is called.\n");
    (*fp)(8.5);
}
void fun1(float f){
    printf("function fun1() is called.\n");
}