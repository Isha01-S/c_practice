/*Find the prime factors of a number using recursion*/
#include <stdio.h>
void prime_factor(int num);
int main(){
    int num;
    printf("Enter the num :");
    scanf("%d",&num);

    prime_factor(num);
    printf("\n");
    return 0;
}

void prime_factor(int num){
    int i=2;
    if (num==1){
        return;
    }
    while(num%i!=0){
        i++;
    }
    printf("%d\t",i);
    prime_factor(num/i);
}