#include <stdio.h>

int main() {
    int p = 1;
    while (p <= 32) {
        printf("%d ", p);
        p *= 2;
    }
    return 0;
}