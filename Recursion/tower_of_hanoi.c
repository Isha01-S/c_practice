/*Program to solve Tower of Hanoi problem using recursion*/
#include<stdio.h>
void tofh(int ndisk,char source,char temp,char dest);
int main(){
    char source='A', temp='B',dest='C';
    int ndisk;

    printf("Enter the number of disks: ");
    scanf("%d",&ndisk);
    
    printf("The sequence is : \n");
    tofh(ndisk, source, temp, dest);

    return 0;
}

void tofh(int ndisk,char source,char temp,char dest){
    if(ndisk==1){
        printf("move disk %d from %c-->%c\n",ndisk, source, dest);
        return;
    }
    tofh(ndisk-1, source, dest, temp);
    printf("move disk %d from %c-->%c\n",ndisk, source, dest);
    tofh(ndisk-1,temp,source,dest);
    
}

