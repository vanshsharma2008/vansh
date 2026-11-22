#include <stdio.h>

int main() {
    int temp = 32;

    if (temp >= 40) {
        printf("Extreme Heat Warning\n");
    } else if (temp >= 30) {
        printf("Hot Weather\n");
    } else if (temp >= 15) {
        printf("Pleasant Weather\n");
    } else {
        printf("Cold Weather\n");
    }

    return 0;
}