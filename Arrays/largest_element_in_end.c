/*Write a program that scans a one-dimensional array from left to right and compares all adjacent elements. 
Any two adjacent elements arr[j] and arr[j+1] should be exchanged if arr[j] is greater than arr[j+1]. This 
procedure will always place the biggest element at the last position. Count the total number of exchanges done.*/

#include<stdio.h>
#define MAX 100
int main(){
    int arr[MAX], i, temp, n, exchanges;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("enter the array: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    exchanges=0;
    for(i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            exchanges++;
        }
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Exchanges = %d \n",exchanges);
    

    return 0;
}