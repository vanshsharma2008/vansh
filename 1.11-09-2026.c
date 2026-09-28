#include <stdio.h>

int main() {
    int year = 2024;
    if (year % 4 == 0) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    return 0;
}