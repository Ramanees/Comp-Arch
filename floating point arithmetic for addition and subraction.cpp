#include <stdio.h>

int main() {
    float num1, num2, sum, difference;

    // Input the numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform addition
    sum = num1 + num2;

    // Perform subtraction
    difference = num1 - num2;

    // Display results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);

    return 0;
}

