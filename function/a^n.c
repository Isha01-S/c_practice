/*write a program to raise a floating point number to an integer power
(e.g. a^n where a is a floating point number and n is an integer value)*/
#include <stdio.h>
#include <math.h>
double power(double a, int n); 
int main()
{
    double a;
    int n;

    printf("Enter a and n(a=base, n=exponent):");
    scanf("%lf %d", &a,&n);
    printf("The result is : %lf\n",power(a,n));
    return 0;
}

double power(double a, int n)
{
    
    double m=1;

    if(n==0){
        return 1;
    }
    else {
        for(int i=1; i<=fabs(n);i++){//abs works for int
            m=m*a;
        }
        if(n>0){
            return m;
        }
        else{
            return 1/m;
        }

    }
    
} 


/*
 first approach that i used
 
 float power(float a, int n); 
int main()
{
    float a;
    int n;

    printf("Enter a and n(a to the power n):");
    scanf("%f %d", &a,&n);
    printf("The result is : %f\n",power(a,n));
    return 0;
}

float power(float a, int n)
{
    int count=0;
    float m=1.0;

    while(count<n)
    {
        m*=a;
        count++;
    }
    return m;
}
    */