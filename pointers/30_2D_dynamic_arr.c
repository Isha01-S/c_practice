/*Program to dunammically allocate a 2D array of pointers*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a[3],i,j,cols;
    printf("Enter the numbers of columns: ");
    scanf("%d",&cols);
    for(i=0;i<3;i++){
        a[i]=(int*)malloc(cols*sizeof(int));
    }
    for(i=0;i<3;i++){
        for(j=0;j<cols;j++){
            printf("Enter the value of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<cols;j++){
            printf("%5d ",a[i][j]);
        
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        free(a[i]);
    }

    

    return 0;
}