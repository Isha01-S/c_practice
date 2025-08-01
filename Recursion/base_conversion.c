/*Program to convert a positive decimal number to Binary, Octal and Hexadecimal*/
#include <stdio.h>
void convert (int , int);
int main(){
    int num;
    printf("Enter the positive decimal number: ");
    scanf("%d",&num);

    convert(num,2);//converts to binary
    printf("\n");
    convert(num,8);//converts to octal
    printf("\n");
    convert(num,16);//converts to hexadecimal
    printf("\n");

    return 0;
}
void convert (int num, int base){
    int rem = num%base;
    if (num==0){
        return;
    }
    convert (num/base,base);
    if (rem<10){
        printf("%d",rem);
    } 
    else {
        printf("%c",rem-10+'A');
    }
}