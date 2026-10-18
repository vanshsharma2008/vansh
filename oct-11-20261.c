#include <stdio.h>

int main() {
    int n = 10, bin = 0, place = 1;
    while (n > 0) {
        bin += (n % 2) * place;
        n /= 2;
        place *= 10;
    }
    printf("Binary value = %d", bin);
    return 0;
}