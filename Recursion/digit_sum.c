/*Find the sum of digits of an integer*/

#include<stdio.h>
int digit_sum(int num);
int main(){
    int num;
    int sum;
    printf("Enter the num: ");
    scanf("%d",&num);
    sum= digit_sum(num);
    printf("%d\n",sum);
    
    return 0;
}

int digit_sum(int num){
    
    if(num== 0){
        return 0;
    }

    return num%10 + digit_sum(num/10);

}