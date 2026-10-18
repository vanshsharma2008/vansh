#include <stdio.h>

int main() {
    int n = 6, steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
    }
    printf("Total steps to reach 1: %d", steps);
    return 0;
}