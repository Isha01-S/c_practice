/*Write a program to implement these formulae of permutations and combinations
Number of permutations of n objects taken r at a time: p(n,r)=n!/(n-r)!
Number of combinations of n objects taken r at a time is: c(n,r)= n!/(r!*(n-r)!)=p(n-r)/r!*/

#include <stdio.h>
long factorial(int);
long perm (int,int);
long comb(int, int);
int main(){
    int n,r;
    printf("Enter n and r:");
    scanf("%d %d", &n, &r);
    if (n < 0 || r < 0 || r > n) {
        printf("Invalid input: Ensure that 0 ≤ r ≤ n\n");
        return 1;
    }
    

    printf("Total combinations are:%ld\n",comb(n,r));
    printf("Total permutations are:%ld\n",perm(n,r));
    return 0;
}
long int factorial(int n){
    long int fact =1;
    if(n==0){
        return 1;
    }
    for(int i=n; i>1; i--){
        fact*=i;
    }
    return fact;
}
long perm (int n, int r){
    long p;
     p=factorial(n)/factorial(n-r);
    return p;
}
long comb(int n, int r){
    long c;
    c= perm(n,r)/factorial(r);
    return c;
}


/*1st approach I used to solve this problem!!!!!!!!
#include <stdio.h>
float p(int n, int r);
float c(int n, int r);
int main()
{int n, r;
    printf("Enter n,r:");
    scanf("%d %d",&n,&r);
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input: r should be <= n and non-negative.\n");
        return 1;
    }
    
    printf("Number of permutations:%f\n",p(n,r));
    printf("Number of combinations:%f\n",c(n,r));
    return 0;
}
float p(int n, int r){
    int fact1=1, fact2=1;
    for(int i=1; i<=n; i++){
        fact1*=i;
        
    }
    for(int j=1; j<=(n-r); j++){
        fact2*=j;
    }
    float result= fact1/fact2;
    return result;
}
float c(int n, int r){
    int fact=1;
    for(int i=1; i<=r; i++){
        fact*=i;
        
    }
    float result= p(n,r)/fact;
    return result;
}*/