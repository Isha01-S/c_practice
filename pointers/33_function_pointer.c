/*Program to invoke a function using function pointer*/

#include<stdio.h>
float add(int,float);
int main(){
    float(*fp)(int,float);
    float result;
    fp=add;

    result=add(5,7.7);
    printf("%f\n",result);

    result=(*fp)(6,5.0);
    printf("%f\n",result);

    return 0;
}
float add(int a,float b){
    return a+b;
}