#include <stdio.h>

int main() {
    int a, 
        b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Add = %d\n", a + b);
    printf("Sub = %d\n", a - b);
    printf("Multiply = %d\n", a * b);
    printf("Divide = %d\n", a / b);

    return 0;
}