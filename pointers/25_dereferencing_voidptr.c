/*Dereferencing a void pointer*/
#include<stdio.h>
int main(){
    int a = 3;
    float b = 3.4;
    float *fp = &b;
    void *vp;
    vp=&a;

    printf("value of a=%d\n",*(int*)vp);
    *(int*)vp=12;
    printf("value of a=%d\n",*(int*)vp);

    vp=fp;
    printf("value of b=%f\n",*(float*)vp);


    return 0;
}