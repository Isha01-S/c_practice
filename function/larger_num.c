/*Program to find larger number*/
#include <stdio.h>
int larger(int x, int y);
int main()
{
    int x,y;
    printf("Enter x and y:");
    scanf("%d%d",&x,&y);
    printf("larger number = %d\n",larger(x,y));
    return 0;
}
int larger(int x, int y)
{
    return (x>y?x:y);
}
