/*Program to raise a floating point number to a positive integer*/

#include <stdio.h>
float expo_func(float a, int n);

int main(){
    float a;
    int n;
    printf("Enter the floating point number: ");
    scanf("%f",&a);
    printf("Enter the positive integer: ");
    scanf("%d",&n);

    printf("%.2f\n", expo_func(a,n));
    return 0;
}

float expo_func(float a, int n){
    
    if(n==0){
        return 1.0;
    }
    return a*expo_func(a,n-1);
}
