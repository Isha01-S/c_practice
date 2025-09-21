/*Program to print address of a variable using address operator*/

#include<stdio.h>
int main(){
    int age =30;
    float salary =1500.50;
    printf("Address of age is: %p\n",&age);//here %p is format specifier used to print addresses.
    printf("Address of salary is: %p\n",&salary);
    return 0;
}