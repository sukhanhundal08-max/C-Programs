#include <stdio.h>

int main() {
    int n;
    long long sum_loop = 0;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Method 1: Using a loop - O(n)
    int current_odd = 1;
    for (int i = 0; i < n; i++) {
        sum_loop += current_odd;
        current_odd += 2;
    }

    // Method 2: Mathematical formula - O(1)
    long long sum_formula = (long long)n * n;

    printf("\n--- Results ---\n");
    printf("Sum using loop: %lld\n", sum_loop);
    printf("Sum using formula (n^2): %lld\n", sum_formula);

    return 0;
}