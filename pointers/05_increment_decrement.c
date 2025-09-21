/*postfix/prefix increment/decrement in a pointer variable of base type int*/

#include<stdio.h>
int main(void){
    int a = 5;
    int *p;
    p = &a;
    
    printf("value of p = address of a = %p\n",p);
    printf("value of p = %p\n", ++p);
    printf("value of p = %p\n", p++);
    printf("value of p = %p\n",p);
    printf("value of p = %p\n",--p);
    printf("value of p = %p\n",p--);
    printf("value of p = %p\n",p);

    return 0;
}