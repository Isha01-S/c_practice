/*Write a program to print a Pascal Triangle using a 2d matrix
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
1   5   10  10  5   1
1   6   15  20  15  6   1*/

#include<stdio.h>
#define MAX 15
int main(){
    int a[MAX][MAX];
    int i, j, n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            if(j==0||i==j){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    //2d matrix

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%5d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}