/*Write a program to print all the prime numbers less than integer n using sieve of erathosthenes
1. Write down all the integers from 2 to n sequentially
2.cross out all multiples of 2
3. find the next uncrossed number, and cross out all its multiples
4. repeat step 3 until we find an uncrossed number whose square is greater than n

all uncrossed numbers are prime.*/
#include<stdio.h>
#define MAX 10000

int main(){
    int arr[MAX]={0},p, i, n;
    printf("Enter n: ");
    scanf("%d",&n);

    p=2;
    while(p*p<=n){
        for(i=2; i*p<=n; i++){
            arr[i*p]=1; //crosses all the multiples of p
        }
        for(i=p+1;i<=n; i++){// find the next uncrossed
            if (arr[i]==0){
                p=i;
                break;
            }
             }
    }
    printf("All the uncrossed elements are: \n");
    for(i=2; i<=n;i++){
        if(arr[i]==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}