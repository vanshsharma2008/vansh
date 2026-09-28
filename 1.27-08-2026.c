#include <stdio.h>

int main() {
    float a = 7.5f, b = 2.0f;

    printf("Average: %.2f\n", (a + b) / 2.0f);
    printf("Percentage: %.2f%%\n", (a / b) * 100.0f); 

    return 0;
}