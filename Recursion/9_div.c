#include<stdio.h>
int divisible_by_9(long int n);
int main(){
    long int n;
    printf("Enter n: ");
    scanf("%ld",&n);
    int k=divisible_by_9(n);
    printf("%d",k);
    if (k==1){
        printf("The number is divisible by 9");
    }
    else{
    printf("The number is not divisible by 9");
    }
    printf("\n");
    return 0;
}
int divisible_by_9(long int n){
    int sum_of_digits=0;
    if (n==9){
        return 1;
    }
    if (n<9){
        return 0;
    }
    while(n>0){
        sum_of_digits+=n%10;
        n/=10;
    }
    return divisible_by_9(sum_of_digits);
}