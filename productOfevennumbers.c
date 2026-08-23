#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Please enter an integer greater than or equal to 2.\n");
        return 1;
    }

    if (n > 32) {
        printf("Note: n > 32 will cause 64-bit unsigned integer overflow.\n");
    }

    // Loop through even numbers from 2 up to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d: %llu\n", n, product);

    return 0;
}
