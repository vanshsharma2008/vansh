
#include <stdio.h>

int main() {
    int n = 5, fact = 1;

calc:
    fact *= n;
    n--;
    if (n > 0) goto calc;

    printf("Factorial = %d\n", fact);
    return 0;
}