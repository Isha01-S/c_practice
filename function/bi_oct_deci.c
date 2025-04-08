/*Write a function that inputs a binary or octal number and converts to decimal number.*/

#include <stdio.h>
int func(int n, int base);
int main()
{
    int num,base,result;
    char choice;
    printf("Enter b for binary o for octal: ");
    scanf("%c",&choice);

    printf("Enter a number:");
    scanf("%d",&num);
    
    base=(choice=='b')? 2 : 8;
    result = func(num, base);
    printf("decimal number is : %d\n", result);
    
    return 0;
}
int func(int n, int base)
{
 int rem,d,j=1,dec=0;
 while(n>0)
 {
    rem=n%10;
    d=rem*j;
    dec+=d;
    j*=base;
    n/=10;
 }   
 return dec;

}


/*
first approach I followed to solve this question.
#include <stdio.h>
void func();
int main()
{
    func();
    return 0;
}

void func(){
    int n, base=0;
    int choice, rem=0,  deci=0;

    printf("Enter the choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1: 
        printf("Enter the binary number:");
        scanf("%d",&n);
        base=1;
        while(n>0){
            rem=n%10;
            deci=deci+rem*base;
            n/=10;
            base*=2;
            
        }printf("The decimal  number is: %d\n",deci);
        break;

        case 2: 
        
        printf("Enter the octal number:");
        scanf("%d",&n);
        base=1;
        while(n>0){
            rem=n%10;
            deci=deci+rem*base;
            n/=10;
            base*=8;
        
        }printf("The decimal number is : %d\n", deci);
        break;
        default:
            printf("Enter a valid choice: 1 for binary and 2 for octal.\n");
        
    }
}
    */
