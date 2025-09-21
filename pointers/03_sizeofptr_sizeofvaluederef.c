/*Program to print the size of pointer variables and size of values dereferenced by them*/

#include <stdio.h> 
int main(){
    char a = 'x', *ptr1 = &a;
    int b = 12, *ptr2 = &b;
    float c = 12, *ptr3 = &c;
    double d = 18.34, *ptr4 = &d;

    printf("sizeof(ptr1) = %zu\tsizeof(*ptr1) = %zu\n",sizeof(ptr1),sizeof(*ptr1));
    printf("sizeof(ptr2) = %zu\tsizeof(*ptr2) = %zu\n",sizeof(ptr2),sizeof(*ptr2));
    printf("sizeof(ptr3) = %zu\tsizeof(*ptr3) = %zu\n",sizeof(ptr3),sizeof(*ptr3));
    printf("sizeof(ptr4) = %zu\tsizeof(*ptr4) = %zu\n",sizeof(ptr4),sizeof(*ptr4));


    return 0;
}