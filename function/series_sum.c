/*Write a program to find out the sum of series
x- x3/3!+ x5/5! -x7/7!+--------x(2n-1)/(2n-1)
*/
#include<stdio.h>
long int factorial(int n);
double power(float x, int n);
double series(float x, int n);

int main(){

float x;
int n;
printf("Enter x:");
scanf("%f",&x);
printf("Enter n:");
scanf("%d",&n);
printf("The sum of series is : %lf\n",series(x,n));

    return 0;
}

double series(float x, int n){
    int i, j, sign=1;
    float term, sum=0;
    for(int i=1; i<=n; i++){
        sign=(i%2==0)?-1:1;
        j=2*i-1;
        term=sign*power(x,j)/factorial(j);
        sum+=term;
    }
    return sum;
}
long int factorial(int n){
    int i;
    long int fact=1;
    if(n==0){
        return 1;
    }
    for(i=n;i>1;i--){
        fact*=i;
    }
    return fact;
}
double power(float x, int n){
int i;
float p=1;
for(i=1; i<=n; i++){
    p=p*x;
}
return p;
}


/*First approach I followed to solve this question.

#include<stdio.h>
#include<math.h>
int factorial(int n);
float sum(int x, int n);
int main(){
    int x,n;
    printf("Enter x and n:");
    scanf("%d %d",&x,&n);

    printf("The sum of the series is %.3f\n",sum(x,n));
    return 0;
}
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
float sum(int x, int n) {
    float s = 0;
    for (int i = 1; i <= n; i++) {
        int power = 2 * i - 1;
        float term = pow(x, power) / (float)factorial(power);

        if (i % 2 == 0)  // even index → subtract
            s -= term;
        else             // odd index → add
            s += term;
    }
    return s;
}

*/