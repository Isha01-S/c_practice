/*program to pass a pointer containing a function's address as an argument*/

#include<stdio.h>
void func(char, void (*fp) (float));
void fun1(float);

int main(){
    void (*p) (float);
    p=fun1;
    printf("function main() called.\n");

    func('a',p);
    return 0;
}

void func(char, void (*fp) (float)){
    printf("function func() is called\n");
    (*fp)(8.5);
}
void fun1(float){
    printf("function fun1() called.\n");
}