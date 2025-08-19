/*Addition of two matrices*/
#define ROW 3
#define COL 4
#include<stdio.h>
int main(){
    int i, j, matrix1[ROW][COL], matrix2[ROW][COL], matrix3[ROW][COL];
    
    printf("Enter the matrix1[%d][%d] row-wise : \n ", ROW, COL);

    for (i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the matrix2[%d][%d] row-wise : \n ", ROW, COL);

    for (i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    //Adding both the matrices


    for (i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j]; //storing the sum in matrix3
        }
    }

    printf("The addition of matrices is :\n ");

    
    for (i=0; i<ROW; i++){
        for(j=0; j<COL; j++){
            printf("%5d",matrix3[i][j]);
        }
        printf("\n ");
    }


    return 0;
}
