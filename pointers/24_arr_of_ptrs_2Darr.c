/*Array of pointers for 2d array*/
#include<stdio.h>
int main(){
    int i,j;
    int arr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,32,22}};
    int *arr_of_ptrs[3];
    for(i=0;i<3;i++){
        arr_of_ptrs[i]=arr[i];
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",arr_of_ptrs[i][j]);
        }
        printf("\n");
    }
    return 0;
}