#include <stdio.h>

int main() {
    float a = 7.5f, b = 2.0f;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %.1f, b = %.1f\n", a, b);
    return 0;
}