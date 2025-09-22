/*pointer to pointer*/

#include<stdio.h>
int main(){
    int a = 5;
    int *pa = &a;
    int **ppa = &pa;

    printf("value of a= %d\n",a);
    printf("Address of a= %p\n",&a);
    printf("value of pa = address of a= %p\n",pa);
    printf("value of *pa = value of a=%d\n", *pa);
    printf("Address of pa= %p\n", &pa);
    printf("value of ppa = address of pa= %p\n",ppa);
    printf("value of *ppa = value of pa= %p\n",*ppa);
    printf("value of **ppa = value of a= %d\n", **ppa);
    printf("address of ppa= %p\n",&ppa);

    return 0;
}