/*Program to dereference a pointer to an array*/

#include<stdio.h>
int main(){
    int arr[5]={3,5,6,7,9};
    int *p=arr; //pointer to integer
    int (*ptr)[5]=&arr;
    printf("p=%p, ptr=%p\n",p,ptr);
    printf("*p=%d, *ptr=%p\n",*p,*ptr);
    printf("sizeof p =%zu, sizeof *p=%zu\n",sizeof(p),sizeof(*p));
    printf("sizeof ptr =%zu, sizeof *ptr=%zu\n",sizeof(ptr),sizeof(*ptr));

    return 0;
}