/*Program that uses function with no arguements and no return values*/
#include <stdio.h>
void displaymenu();
int main()
{
    int choice;
    displaymenu();
    printf("enter your choice:");
    scanf("%d",&choice);
    return 0;
}
void displaymenu()
{
    printf("1. Create database\n");
    printf("2. Insert new record\n");
    printf("3. Modify new record\n");
    printf("4. Delete a record\n");
    printf("5. Display all records\n");
    printf("6. Exit\n");
}