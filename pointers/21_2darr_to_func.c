/*Passing a 2-D array to a function*/
#include<stdio.h>
void func(int (*a) [4]);

int main(){
    int i,j;
    int arr[3][4]={
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33}
    };
    printf("Inside main(): sizeof(arr)= %zu\n",sizeof(arr));
    func(arr);
    printf("Contents of array after calling func() are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void func(int (*a) [4]){

    int i,j;
    printf("Inside func(): sizeof(a) = %zu\n",sizeof(a));
    printf("Inside func(): sizeof(*a) = %zu\n",sizeof(*a));
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            a[i][j]+=2;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
