/*array of pointers*/
#include<stdio.h>
int main(){
    int *arr_of_pointers[3];
    int i, a=5, b=10, c=15;
    arr_of_pointers[0]=&a, arr_of_pointers[1]=&b, arr_of_pointers[2]=&c;

    for(i=0;i<3;i++){
        printf("arr_of_pointers[%d]=%p\t",i,arr_of_pointers[i]);
        printf("*arr_of_pointer[%d]=%d\n",i,*arr_of_pointers[i]);
    }
    return 0;
}