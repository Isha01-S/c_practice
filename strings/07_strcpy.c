/*strcpy() function*/

#include<stdio.h>
#include<string.h>
int main(){
    char str1[10], str2[10];
    printf("Enter a string:");
    scanf("%s",str2);

    strcpy(str1,str2);
    printf("The first string is: %s\t The second string is: %s\n",str1,str2);

    strcpy(str1,"Delhi");
    strcpy(str2,"Bangalore");
 
    printf("The first string is: %s\t The second string is: %s\n",str1,str2);
    return 0;
}