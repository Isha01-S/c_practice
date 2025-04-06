/*Write a function that takes two numbers and prints all the prime numbers betweeen them*/


#include <stdio.h>
#include <math.h>
void printPrimes(int num1, int num2);
int isPrime(int n);

int main()
{
    int num1, num2;
    printf("Enter the two numbers:");
    scanf("%d %d",&num1, &num2);
    
    printf("Prime numbers between %d and %d are:\n", num1, num2);

    printPrimes(num1, num2);

    return 0;
}
void printPrimes(int num1, int num2){
    int i;
    for(i=num1; i<=num2; i++){
        if(isPrime(i)){
            printf("%d\n",i);
        }
    }
}
int isPrime(int n){
    if (n<=1){
        return 0;//handles 1
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

/*
The first approach that i followed to solve this problem,
#include <stdio.h>
#include <math.h>
void prime_num(int a, int b);
int main(){
    int num1, num2;
    printf("Enter the two numbers:");
    scanf("%d %d",&num1,&num2);

    printf("The prime numbers between %d and %d are:\n", num1, num2);

    prime_num(num1,num2);

    return 0;
}
void prime_num(int a, int b)
{
    
    for(int i=a; i<=b; i++)
    {
        int flag=1;//asseme prime;
        if (i<2){
            continue;
                }
        
        for(int j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            
        }
        if (flag){
            printf("%d\n",i);
        }
    }
}*/