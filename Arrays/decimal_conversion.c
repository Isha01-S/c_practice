/*Program to decimal number to binary, octal, hexadecimal.*/
#include <stdio.h>

void decimal_conversion(int num, int base);

int main() {
    int num, choice;
    printf("Enter the decimal number : ");
    scanf("%d", &num);

    printf("Enter your choice:\n (1 for binary\n 2 for octal\n 3 for hexadecimal)\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Binary equivalent is: ");
            decimal_conversion(num, 2);
            break;
        case 2:
            printf("Octal equivalent is: ");
            decimal_conversion(num, 8);
            break;
        case 3:
            printf("Hexadecimal equivalent is: ");
            decimal_conversion(num, 16);
            break;
        default:
            printf("Invalid choice!\n");
    }
    printf("\n");
    return 0;
}

void decimal_conversion(int num, int base) {
    int i = 0, j, rem;
    char arr[30];

    while (num > 0) {
        rem = num % base;
        num /= base;

        if (rem >= 10) {
            arr[i++] = rem - 10 + 'A';  // For hexadecimal digits A-F
        } else {
            arr[i++] = rem + '0';       // For 0-9
        }
    }

    // Print digits in reverse order
    for (j = i - 1; j >= 0; j--) {
        printf("%c", arr[j]);
    }
}
