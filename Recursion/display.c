/*displaying the values from 1 to n using recursion*/
#include<stdio.h>
void display(int n);
int main(){
    int n;
    printf("enter the numbers to be displayed:\n");
    scanf("%d",&n);
    printf("\n");
    display(n);
    return 0;
}
void display(int n){
    if (n==0){
        return;
    }

    display(n-1);
    printf("%d\n",n);
}