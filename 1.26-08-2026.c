#include <stdio.h>

int main() {
    int a = 12;
    int b = 5;
    int c;

    c = a + b;
    printf("Addition: %d\n", c);

    c = a - b;
    printf("Subtraction: %d\n", c);

    c = a * b;
    printf("Multiplication: %d\n", c);

    c = a / b;
    printf("Division: %d\n", c);

    return 0;
}