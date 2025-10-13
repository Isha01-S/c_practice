/*Input and output strings using gets() and puts()*/
#include<stdio.h>
int main(){
    char name[20];
    printf("Enter the name: ");
    gets(name);
    printf("Entered name is :\n");
    puts(name);
    return 0;
}