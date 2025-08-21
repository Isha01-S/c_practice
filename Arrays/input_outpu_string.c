/*Input and output of a string using scanf and printf*/
#include<stdio.h>
int main(){
    char str[15] = "Isha";
    printf("String is : %s \n",str);

    printf("Enter the new string :");
    scanf("%s",str);

    printf("String is : %s\n",str);
}