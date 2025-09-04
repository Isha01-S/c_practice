/*Program of sorting using Insertion Sort*/
#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX], temp, size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    printf("Enter the array :");
    for (int i=0 ; i<size; i++){
        scanf("%d",&arr[i]);
    }
for (int i=1; i<size; i++) {
    temp = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > temp) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;   // put temp in the correct position
}

    for (int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}