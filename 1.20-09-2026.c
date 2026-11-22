#include <stdio.h>

int main() {
    int num = 16;
    if (num > 0 && (num & (num - 1)) == 0) {
        printf("Power of 2\n");
    } else {
        printf("Not a power of 2\n");
    }
    return 0;
}