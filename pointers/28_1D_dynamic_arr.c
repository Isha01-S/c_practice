/*Program to access dynamically allocated memory as 1D array*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, n, i;

    printf("Enter the number of integers to be entered: ");
    scanf("%d",&n);

    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("memory not available.\n");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter the integer:");
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",p[i]);
        
    }
    printf("\n");
    return 0;
}