/*Write a program to print a matrix spirally*/

#include<stdio.h>
#define MAX 20
int main(){
    int a[MAX][MAX],n, start, end;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter the matrix: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //logic for spiral matrix

    for(start=0,end=n-1; start<=end; start++,end--){
        for(int i=start;i<=end;i++){
            printf("%d ", a[start][i]);
        }
        for(int i=start+1;i<=end; i++){
            printf("%d ", a[i][end]);
        }
        for(int i=end-1; i>=start; i--){
            printf("%d ", a[end][i]);
        }
        for(int i=end-1; i>=start+1; i--){
            printf("%d ", a[i][start]);
           }

        }

        printf("\n");
        return 0;
}