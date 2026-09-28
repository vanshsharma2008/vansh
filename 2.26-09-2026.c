#include <stdio.h>

int main() {
    int sum = 0, i = 1;
    while (i <= 5) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}