/*Program to find the factorial of a function by using recursive method*/

#include <stdio.h>
long int fact(int n);
int main(){
int n;
printf("Enter n: ");
scanf("%d",&n);
if(n<0){
    printf("Enter a positive number: ");
}


printf("The factorial of %d is : %ld\n", n, fact(n));
    return 0;
}

long int fact(int n){
    
    if (n==0){
        return 1;
    }
    else{
     return  n*fact(n-1);   
    }
    
}