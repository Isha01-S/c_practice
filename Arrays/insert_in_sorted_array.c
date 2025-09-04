/*Program to insert an item in a sorted array at proper place 
by shifting the other elements to the right*/

#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX], size, insert_item;
    printf("Enter the size of the array :");
    scanf("%d", &size);

    printf("Enter the array :");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the item to be inserted  : ");
    scanf("%d",&insert_item);

    for(int i=size-1; i>=0; i--){

        if (insert_item>arr[i]){
            arr[i+1]=insert_item;
            break;
        }
        else{
            arr[i+1]=arr[i];

        }
    }
    

    //now the size has increased by 1

    for(int i=0; i<size+1; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

return 0;
}