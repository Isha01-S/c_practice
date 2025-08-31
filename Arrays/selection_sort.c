/*Selection Sort*/

#include<stdio.h>
#define MAX 100
int main(){
    int arr[MAX], i,j,n,temp, min;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }

        }
        if(i!=min){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("Sorted array is : ");

    for( i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}