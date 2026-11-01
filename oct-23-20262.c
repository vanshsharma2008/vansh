#include <stdio.h>

int main() {
    for (int i = 2; i <= 6; i++) {
        for (int j = 2; j <= 6; j++) {
            if (i == 2 && j == 2) {
                break; 
            }
            printf("i=%d, j=%d\n", i, j);
        }
    }
    return 0;
}