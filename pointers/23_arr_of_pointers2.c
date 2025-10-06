/*Program for understanding array of pointers*/

#include<stdio.h>
int main(){
    int i;
    int arr[4]={5,10,15,20};
    int *arr_of_pointers[4];
    for(i=0;i<4;i++){
        arr_of_pointers[i]=&arr[i];
    }
    for(i=0;i<4;i++){
        printf("arr_of_pointers[%d]=%p\n",i,arr_of_pointers[i]);
        printf("*arr_of_pointers[%d]=%d\n",i,*arr_of_pointers[i]);
        printf("\n");
    }
    return 0;
}