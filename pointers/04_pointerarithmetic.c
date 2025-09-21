/*Pointer Arithmetic*/

#include<stdio.h>
int main(){
    int a = 5, *pi = &a;
    char b = 'x', *pc = &b;
    float c = 5.5, *pf = &c;

    printf("value of pi = address of a = %p \n", pi);
    printf("value of pc = address of b = %p \n", pc);
    printf("value of pf = address of c = %p \n", pf);

    pi++;
    pc++;
    pf++;

    printf("after increamenting the value of pi = %p\n",pi);
    printf("after increamenting the value of pc = %p\n",pc);
    printf("after increamenting the value of pf = %p\n",pf);


    return 0;
}