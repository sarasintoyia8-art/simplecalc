#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Calculations
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int division = a / b;     // assumes b != 0
    int modulus = a % b;      // assumes b != 0

    // Output
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", a, b, sum);
    printf("Subtraction: %d - %d = %d\n", a, b, difference);
    printf("Multiplication: %d * %d = %d\n", a, b, product);
    printf("Division: %d / %d = %d\n", a, b, division);
    printf("Modulus: %d %% %d = %d\n", a, b, modulus);

    return 0;
}

