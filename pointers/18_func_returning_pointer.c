/*function returning a pointer*/
#include<stdio.h>
int *func(int *p, int n);
int main(){
    int n=5, arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=func(arr, n);
    printf("address of arr= %p\naddress of ptr=%p\nvalue of *ptr=%d\n",arr,ptr,*ptr);
    return 0;
}

int *func(int *p, int n){
    p=p+n;
    return p;
}