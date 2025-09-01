/*Bubble Sort*/
#include<stdio.h>
#define MAX 100
int main(){
    int arr[MAX], i, j, temp, n, xchanges;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array : ");
    for( i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                xchanges++;
            }
        }
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Total number of exchanges are : %d \n", xchanges);


    return 0;
}