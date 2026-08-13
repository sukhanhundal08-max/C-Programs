#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Original value = %d\n", a);

    a++;
    printf("After increment = %d\n", a);

    --a;
    printf("After decrement = %d\n", a);

    return 0;
}
