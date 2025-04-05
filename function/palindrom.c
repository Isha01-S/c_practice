#include <stdio.h>
long int reverse(long int n);
int isPalindrome(long int num);
int main()
{
    long int num;
    printf("Enter a number:");
    scanf("%ld", &num);
    if(isPalindrome(num))
    {
        printf("The number is Palindrome!\n");
    }
    else {
        printf("The number is not Palindrome\n");
    }


    return 0;
}
long int reverse(long int n){
    long int rev=0;
    do{
        rev=rev*10+n%10;
        n=n/10;
    }while(n>0);
    return rev;
}
int isPalindrome(long int num){
    if(num==reverse(num)){
        return 1;
    }
    return 0;

}
/*
This is the first approach that I followed to solve this question.

#include<stdio.h>
int reverse(int n);
void palindrom(int num, int rev_num);

int main()
{
    int num;
    int rev_num;
    printf("Enter the number:");
    scanf("%d",&num);
    rev_num=reverse(num);
    printf("reverse number is : %d\n",rev_num);
    palindrom(num,rev_num);
    
    return 0;
}

int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}

void palindrom(int num,int rev_num){
    
    if(num==rev_num)
    {
        printf("%d is palindrom.\n",num);
    }
    else{
        printf("%d is not palindrom\n", num);
    }

}*/
