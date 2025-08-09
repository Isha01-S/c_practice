#include<stdio.h>
#define SIZE 10
int main()
{
    int size=15;
    float salary[SIZE];//valid
    int marks[size];//invalid
    marks[1]=20;
    marks[1]++;     //increments the value 20 by 1
    printf("%d\n",marks[1]);

    return 0;
}