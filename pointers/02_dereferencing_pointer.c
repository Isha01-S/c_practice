/*Dereferencing pointer variables*/

#include<stdio.h>
int main(){

    int a =87;
    float b = 4.5;
    int *ptr1 = &a;
    float *ptr2 = &b;

    printf("Value of ptr1 = address of a = %p\n",ptr1);
    printf("Value of ptr2 = address of b = %p\n",ptr2);

    printf("address of ptr1 = %p\n", &ptr1);
    printf("address of ptr2 = %p\n", &ptr2);

    printf("The value of a = %d = %d = %d \n", a,*ptr1,*(&a));
    printf("The value of b = %.2f = %.2f = %.2f \n", b,*ptr2,*(&b));

    return 0;
}