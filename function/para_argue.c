/*Actual Parameters and formal arguements*/

#include <stdio.h>
void function(int a , int b);

int main()
{
    int x=10, y=20;

    function(x,y);
    printf("x=%d , y=%d\n", x,y);
    return 0;
}
void function(int a , int b)
{
a++;
b--;
printf("a=%d ,b=%d\n",a,b);

}
