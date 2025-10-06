/*Program to verify that when an array is passed to a function, the receiving parameter is declared as a pointer*/

#include<stdio.h>
void func(double d[], int *i, char c[5]);

int main(){
    double d_arr[5]={1.4,2.5,3.7,4.1,5.9};
    int i_arr[5]={1,2,3,4,5};
    char c_arr[5]={'a','b','c','d','e'};
    printf("Inside main(): ");
    printf("size of d_arr= %zu\n",sizeof(d_arr));
    printf("size of i_arr= %zu\n",sizeof(i_arr));
    printf("size of c_arr= %zu\n",sizeof(c_arr));
    printf("%p %p %p\n",d_arr,i_arr,c_arr);
    func(d_arr,i_arr,c_arr);
    return 0;
}
void func(double d[], int *i, char c[5]){
    printf("Inside func : ");
    printf("size of d= %zu\n",sizeof(d));
    printf("size of i= %zu\n",sizeof(i));
    printf("size of c_arr= %zu\n",sizeof(c));
    printf("%p %p %p\n",d,i,c);

}