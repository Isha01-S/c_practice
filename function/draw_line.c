/*Program to draw a line*/
#include <stdio.h>
void draw_line();

int main()
{
    draw_line();
    return 0;
}

void draw_line()
{
    for(int i; i<=50; i++)
    {
        printf("-");
    }
    printf("\n");
}