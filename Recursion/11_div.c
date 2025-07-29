#include<stdio.h>
int divisible_by_11(long int n);

int main(){
    long int n;
    printf("Enter n: ");
    scanf("%ld",&n);
    int k=divisible_by_11(n);
    printf("%d\n",k);
    if (k==1){
        printf("The number is divisible by 11");
    }
    else{
    printf("The number is not divisible by 11");
    }
    printf("\n");
    return 0;
}
int divisible_by_11(long int n){
    int s1=0,s2=0,diff;
    if(n==0){
        return 1;
    }
    else if (n<10){
        return 0;
    }
    while(n>0){
        s1+=n%10;
        n/=10;
        s2+=n%10;
        n/=10;
    }
    diff=s1>s2?(s1-s2):(s2-s1);
    return divisible_by_11(diff);
}