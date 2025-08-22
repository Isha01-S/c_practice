/*Program to understnad macros with arguments*/

#include<stdio.h>
#define IS_LOWER(c) (c>=97 && c<=122) //checks for lowercase
#define IS_UPPER(c) (c>=65 && c<=90)  //checks for uppercase
#define IS_ALPHA(c) IS_LOWER(c)||IS_UPPER(c)
#define IS_NUM(c)   (c>=48 && c<=57)
#define IS_ALPHANUM(c)  IS_NUM(c)||IS_ALPHA(c)

int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);

    if (IS_ALPHANUM(ch)){
        printf("%c is a alphanumberc character",ch);
    }
    else{
        printf("%c is not an alphanumeric character\n",ch);
    }
    printf("\n");

    return 0;
}