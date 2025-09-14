/*Program to merge two sorted array into one sorted array*/
#include<stdio.h>
#define MAX 100
void merge(int arr1[], int arr2[],int arr3[], int n1, int n2);
int main(){
    int arr1[MAX],arr2[MAX],arr3[2*MAX],n1,n2,i;
    printf("Enter the number of elements in array 1: ");
    scanf("%d",&n1);
    printf("Enter the first array with %d elements\n",n1);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements in array 2 :");
    scanf("%d",&n2);

    printf("Enter the second array with %d elements\n", n2);
    for(i=0;i<n2; i++){
        scanf("%d",&arr2[i]);
    }
    merge(arr1,arr2,arr3,n1,n2);
    //merged array

    printf("sorted merged array is :\n");
    for(i=0;i<(n1+n2);i++){
        printf("%d ",arr3[i]);
    }
    printf("\n");

    return 0;
}

void merge(int arr1[], int arr2[], int arr3[], int n1, int n2){

    int i=0, j=0, k=0;//indices for first,second and third array respectively.
    while((i<n1)&&(j<n2)){
        if(arr1[i]<=arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }

    //for remaining elements
    while(i<n1){
        arr3[k++]=arr1[i++];
    }
    while(j<n2){
        arr3[k++]=arr2[j++];
    }
}