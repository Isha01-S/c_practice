/*Program that uses a general function which works on arrays of different sizes.*/
#include<stdio.h>
int add(int arr[], int n);
int main(){
    int a[5]={2,4,6,8,10};
    int b[8]={1,3,5,7,9,11,13,15};
    int c[10]={1,2,3,4,5,6,7,8,9,10};
    
    printf("The sum of elemnts of array a is %d\n: ",add(a,5));
    printf("The sum of elemnts of array b is %d\n: ",add(b,8));
    printf("The sum of elemnts of array c is %d\n: ",add(c,10));
    printf("\n");
    return 0;
}
int add(int arr[],int n){
    int i, sum=0;
    for(i=0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}