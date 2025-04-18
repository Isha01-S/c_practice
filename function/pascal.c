/*Write a program to print Pascal's Triangle.*/
#include <stdio.h>
long comb(int, int);//function for number of combinaitons
long factorial(int);//function for factorial
int main(){

    int i,j,k;
    printf("Enter the number of rows for Pascal's Triangle.");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        for(int j=0; j<=i; j++){
            printf("%4ld",comb(i,j));//calling the combination function and passing the values of i and j in it.
        }
        printf("\n");//for new line
    }
    return 0;
}
long comb(int n,int r){
    long c;
    c= factorial(n)/(factorial(r)*factorial(n-r));
    return c;
}
long factorial(int n){
    int i;
    long int fact=1;
    for(int i=n; i>1; i--){
        fact*=i;
    }
    return fact;
}