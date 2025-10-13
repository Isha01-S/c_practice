/*Input and output strings using scanf() and printf()*/
#include<stdio.h>
int main(){
    char name[40];
    printf("Enter a name: ");
    scanf("%s",name);
    printf("%s %s\n",name,"S");
    
    return 0;
}