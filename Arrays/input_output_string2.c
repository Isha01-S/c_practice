/*Input and output of strings using gets() and puts()*/
#include<stdio.h>
int main(){
    char str[10]="Isha";
    printf("Enter the string :");
    gets(str);
    printf("The string is :");
    puts(str);
    return 0;
}