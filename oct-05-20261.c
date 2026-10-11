#include <stdio.h>

int main() {
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 11; j++) {
            if ((i == 0 && (j == 2 || j == 3 || j == 7 || j == 8)) ||
                (i == 1 && (j >= 1 && j <= 4 || j >= 6 && j <= 9)) ||
                (i == 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < 5 - i; j++) printf(" ");
        for (int j = 0; j < (2 * i - 1); j++) printf("*");
        printf("\n");
    }

    return 0;
}