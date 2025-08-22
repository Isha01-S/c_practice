/*Program to understand macros with arguments.*/

#include<stdio.h>
#define SUM(x,y) ((x)+(y))
#define PROD(x,y) ((x)*(y))

int main(){
    int l,m,i,j,a=5,b=4;
    float p,q;
     
    l=SUM(a,b);
    m=PROD(a,b);

    i=SUM(3,4);
    j=PROD(3,4);

    p=SUM(5.2,3.9);
    q=PROD(5.2,3.9);

    printf("l=%d, m=%d, i=%d, j=%d, p=%.1f, q=%.1f\n",l,m,i,j,p,q);


    return 0; 
}
