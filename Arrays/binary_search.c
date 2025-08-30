/*Binary search in an array*/

#include<stdio.h>
#define MAX 50
int binary_search(int arr[],int size, int item);

int main(){
    int i, size, item, arr[MAX], index;

    printf("Enter the number of elements in the array :");
    scanf("%d",&size);

    printf("Enter the array: ");
    for(int i=0; i<size;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be found : ");
    scanf("%d",&item);

    index = binary_search(arr,size,item);

    if (index==-1){
        printf("The element not found in the array.");
    }
    else{
        printf("The element %d is present at index %d.\n",item, index);
    }
    
    return 0;
}

int binary_search(int arr[],int size, int item){
    int low, high, mid;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if (arr[mid]==item){
            return mid;
        }
        else if (arr[mid]>item){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}