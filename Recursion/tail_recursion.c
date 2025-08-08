#include<stdio.h>
void display1(int n);
void display2(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    display1(n);
    printf("\n");
    display2(n);

    return 0;
}

void display1(int n)
{
    if (n==0){
        return;
    }
    printf("%d ", n);
    display1(n-1);
}

void display2(int n)
{
    if (n==0){
        return;
    }
    
    display1(n-1);
    printf("%d ", n);
}