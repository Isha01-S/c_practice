/*Program to display and find out the sum of series*/

#include<stdio.h>
int rseries(int n);
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("\b\b= %d\n\n\n", rseries(n)); // \b erases last + sign
    return 0;
}
int rseries(int n){
    int sum;
    if (n==0){
        return 0;
    }
    
    sum = n + rseries(n-1);
    printf("%d + ", n);
    return sum;
    
}