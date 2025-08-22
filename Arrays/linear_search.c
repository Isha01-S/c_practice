/*Linear Search in an Array*/

#include<stdio.h>
#define MAX 50

int linear_search(int arr[], int elements, int item);
int main(){
    int i, elements, item, arr[MAX], index;
    printf("Enter the number of elements : ");
    scanf("%d",&elements);

    printf("Enter the array :");
    for (i=0; i<elements; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the elements to be searched : ");
    scanf("%d",&item);

    index= linear_search(arr, elements, item);

    if (index==-1){
        printf("%d item not found!\n",item);
    }
    else{
        printf("%d element found at %d \n",item, index);
    }

    return 0;
}
int linear_search(int arr[], int elements, int item){
    int i=0;
    while(i<elements){
        if (arr[i]==item){
            return i;
        }
        i++;
    }
    return -1;
}