#include <stdio.h>

int main() {
    int n = 5, fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    printf("Factorial = %d", fact);
    return 0;
}