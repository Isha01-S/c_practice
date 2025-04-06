/*Write a function isprime() which takes a number and returns 1 if the number is prime and 0 otherwise.*/
#include <stdio.h>
#include <math.h>
int isPrime(int n);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(isPrime(num))
    {
        printf("The number is Prime!\n");
    }
    else{
        printf("The number is not prime\n");
    }
return 0;
}
int isPrime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            return 0;//if not prime
        }
    }
    return 1;//if prime
        
    
}