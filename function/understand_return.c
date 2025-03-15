/*Program to understand the use of return statement*/

#include <stdio.h>
void selection(int age, float ht);

int main()
{
    int age;
    float ht;

    printf("Enter the age and height:");
    scanf("%d%f",&age,&ht);

    selection(age,ht);
    return 0;
}

void selection(int age, float ht)
{
    if(age>25)
    {
        printf("height should be less than 25\n");
        return;
    }
    if(age<5)
    {
        printf("height should be more than 5\n");
        return;
    }

    printf("Selected\n");
}