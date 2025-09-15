/*program to print the magic matrix*/
/*order nxn
  n is always odd
  numbers in matrix= 1 to n^2
  some of every row, column and diagonal are equal
  */

#include<stdio.h>
#define MAX 20
int main(){
    int matrix[MAX][MAX], i, j, n, num;
    printf("Enter the value of n( odd value):");
    scanf("%d", &n);

    i=n-1; //bottom row
    j=(n-1)/2; //center column

    for(num=1; num<=n*n; num++){
        matrix[i][j]=num;
        i++; //moves one row down
        j--; //moves one column left

        if (num%n==0){
            i-=2; //one above the previous row
            j++;  //back to the previous column
        }
        else if (i==n){
            i=0; //goes to the topmost row
        }
        else if (j==-1){
            j=n-1; //goes to the rightmost column
        }
    }

    printf("The magic matrix is :\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%5d ", matrix[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
    return 0;
}