/*Write a program to insert an item in an array at a specified index by moving other elements to the right*/
#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX], size, insert_item, index;
    printf("Enter the size of the array :");
    scanf("%d", &size);

    printf("Enter the array :");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the item to be inserted  : ");
    scanf("%d",&insert_item);
    printf("Enter the index on which the item is to be inserted :");
    scanf("%d",&index);

    for(int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=insert_item;

    //now the size has increased by 1

    for(int i=0; i<size+1; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");


    

    return 0;
}