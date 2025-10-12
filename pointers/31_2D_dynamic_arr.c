/*Program to dynamically allocate a 2D array(entering both rows and columns at runtime)*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int **a, i,j, rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&rows,&cols);
    //allocate a 1D array of int pointers

    a=(int **)malloc(rows*sizeof(int*));

    /*allocate one dimensional array of integers for each row pointers*/

    for(i=0;i<rows;i++){
        a[i]=(int*)malloc(cols*sizeof(int));
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("the matrix is:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<rows;i++){
        free(a[i]);
    }
    free(a);

    return 0;
}