/*Multiplication of two matrices.*/
#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2

int main(){
    int matrix1[ROW1][COL1], matrix2[ROW2][COL2], matrix3[ROW1][COL2];
    int i, j, k;
    printf("Enter the first matrix1[%d][%d] : \n",ROW1, COL1);

    for (i=0; i<ROW1; i++){
        for(j=0; j<COL1; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the second matrix2[%d][%d] : \n ",ROW2, COL2);

    for (i=0; i<ROW2; i++){
        for(j=0; j<COL2; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    //multipying the matrix

     for (i=0; i<ROW1; i++){
        for(j=0; j<COL2; j++){
            matrix3[i][j]=0;
            for(k=0;k<COL1;k++){
                matrix3[i][j]+= matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The multiplication of matrices is : \n");
     for (i=0; i<ROW1; i++){
        for(j=0; j<COL2; j++){
            printf("%5d ",matrix3[i][j]);
            
        }
        printf("\n");
    }


    return 0;
}