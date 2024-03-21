#include <stdio.h>

// Union to access the same memory location as a float or an unsigned int
union FloatConverter {
    float floatValue;
    unsigned int intValue;
};

// Function to print the binary representation of a float
void printFloatBinary(float f) {
    union FloatConverter converter;
    converter.floatValue = f;

    printf("Binary representation of %.2f:\n", f);

    // Extracting the bits of the float and printing them
    for (int i = 31; i >= 0; i--) {
        printf("%d", (converter.intValue >> i) & 1);
        if (i == 31 || i == 23) printf(" ");
    }
    printf("\n");
}

int main() {
    float number;

    // Input the floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Print the binary representation of the input number
    printFloatBinary(number);

    return 0;
}

