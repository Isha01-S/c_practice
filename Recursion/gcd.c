#include<stdio.h>
int gcd(int a, int b){
    if (b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("gcd is %d\n: ", gcd(a,b));
    return 0;
}