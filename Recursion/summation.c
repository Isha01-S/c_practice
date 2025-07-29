/*Summation of numbers from 1 to n*/
#include <stdio.h>
long int summation(int n);
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
if(n<0){
    printf("Enter a positive number: ");
}


printf("The Summation of %d is : %ld\n", n, summation(n));
    return 0;
}

long int summation(int n){
    
    if (n==0){
        return 0;
    }
    else{
     return  n+summation(n-1);   
    }
    
}