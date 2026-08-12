#include <stdio.h>

int main() {
    float radius, circumference;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14159 * radius;

    printf("Circumference = %.2f\n", circumference);

    return 0;
}