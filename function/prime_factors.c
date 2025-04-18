/*Write a program to find out the prime factors of a number*/
#include<stdio.h>
void prime_factor(int num);
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Prime factors of %d are:\n",num);
    prime_factor(num);
    return 0;
}
void prime_factor(int num){
    int a=2;
    for(int i=2; num!=1; i++){
        while(num%i==0)
        {
            printf("%d\t",i);
            num=num/i;
        }
    }
    
}