/*Program to print the address and characters of a string using pointers*/

#include<stdio.h>
int main(){
    char str[]= "Isha";
    char *ptr=str;
    while(*ptr!='\0'){
        printf("character= %c\t",*ptr);
        printf("address= %p\n",ptr);
        ptr++;
    }
    return 0;
}