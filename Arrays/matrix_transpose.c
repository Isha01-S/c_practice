/*Tranpose of matrix*/

#include<stdio.h>
#define ROW 3 
#define COL 4

int main(){

    int i, j;
    int matrix1[ROW][COL], matrix2[COL][ROW];

    printf("Enter the matrix1[%d][%d]: \n", ROW,COL);
    for (i=0;i<ROW;i++){
        for (j=0;j<COL;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    
    //matrix transpose:
    
    
    for (i=0;i<ROW;i++){
        for (j=0;j<COL;j++){
            matrix2[j][i]=matrix1[i][j];
        }
    }

    printf("The transposed matrix is : \n");
    for (i=0;i<COL;i++){
        for (j=0;j<ROW;j++){
            printf("%5d ",matrix2[i][j]);
        }
        printf("\n");
    }


    return 0;

}