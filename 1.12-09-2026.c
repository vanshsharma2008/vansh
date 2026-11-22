#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 15;
    if (x >= y && x >= z) {
        printf("%d is the largest\n", x);
    } else if (y >= x && y >= z) {
        printf("%d is the largest\n", y);
    } else {
        printf("%d is the largest\n", z);
    }
    return 0;
}