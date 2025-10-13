/*strlen() function*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter the string:");
    gets(str);
    printf("The length of the string is: %u\n",strlen(str));
    return 0;
}