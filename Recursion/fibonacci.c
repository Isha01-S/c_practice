#include <stdio.h>

int fib(int n);

int main() {
    int nterms, i;
    printf("Enter number of terms: ");
    scanf("%d", &nterms);  // removed extra space

    for (i = 0; i < nterms; i++) {
        printf("%d ", fib(i));
    }

    printf("\n");
    return 0;
}

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);  // fixed the recursion
}
