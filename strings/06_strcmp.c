/*Program to understand the work of strcmp() function*/

#include<stdio.h>
#include<string.h>
int main(){
    char str1[10],str2[10];
    printf("Enter the two strings:");
    gets(str1);
    gets(str2);
    if((strcmp(str1,str2))==0){
        printf("strings are same.");
    }
    else{
        printf("strings are not same.");
    }
    printf("\n");
    return 0;
}