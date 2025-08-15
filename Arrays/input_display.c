/*Program to input values into an arrau and display them*/

#include<stdio.h>
int main()
{ int arr[5], i;
    for (i=0;i<5;i++){
        printf("Enter the value of arr[%d]; ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are : \n");

    for(i=0; i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}