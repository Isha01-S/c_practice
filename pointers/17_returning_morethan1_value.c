/*returning more than one value from a function using call by reference*/
#include<stdio.h>
void func(int x, int y,int *ptr_sum, int *ptr_diff, int *ptr_prod);
int main(){
    int x,y;
    int sum, diff, prod;
    printf("Enter the number x and y:");
    scanf("%d %d",&x,&y);
    func(x,y,&sum,&diff,&prod);
    printf("the sum = %d\ndiff = %d\nprod=%d\n",sum,diff,prod);



    return 0;
}

void func(int x, int y,int *ptr_sum, int *ptr_diff, int *ptr_prod){
    *ptr_sum=x+y;
    *ptr_diff=x-y;
    *ptr_prod=x*y;
}