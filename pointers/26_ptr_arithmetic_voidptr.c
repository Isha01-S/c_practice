/*Pointer arithmetic in void pointers*/

#include<stdio.h>
int main(){
    int i;
    float a[4]={1.2,2.5,3.6,4.6};
    void *vp;
    vp=a;
    for(i=0;i<4;i++){
        printf("%.1f\t",*(float*)vp);
        vp =(float *)vp+1;
    }
    printf("\n");
    return 0;
}
