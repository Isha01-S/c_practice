/*Write a program which finds the smallest element of te array and swaps it with the 0th element of the array*/

#include<stdio.h>
#define MAX 100
 int main(){
    int arr[MAX], size, temp, min;
    printf("Enter the number of elements : ");
    scanf("%d",&size);

    printf("Enter the array :");
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    min=0;
    for(int j=1; j<size; j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }

    if(min!=0){
        temp=arr[0];
        arr[0]=arr[min];
        arr[min]=temp;
    }

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
 }