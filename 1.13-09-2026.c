#include <stdio.h>

int main() {
    int num = 8;

    if (num > 0) {
        if (num % 2 == 0) {
            printf("Positive Even\n");
        } else {
            printf("Positive Odd\n");
        }
    } else {
        printf("Not a positive number\n");
    }
    return 0;
}