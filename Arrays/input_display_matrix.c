/*Program to input and display a matrix.*/


#define ROW 3
#define COL 4
#include<stdio.h>
int main (){
    int mat[ROW][COL],i,j;
    printf("Enter the elements of the matrix(%dx%d) row-wise :",ROW,COL);

    for (i=0;i<ROW;i++){
        for (j=0; j<COL; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix that you have entered : \n");
    for(i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("%5d",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
