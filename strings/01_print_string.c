/*Program to print the characters of a string and address of each character*/

#include<stdio.h>
int main(){
    char str[]="Isha";
    int i;
    for(i=0;str[i]!='\0'; i++){
        printf("character = %c\t",str[i]);
        printf("address = %p\n",&str[i]);
    }
    printf("\n");
}