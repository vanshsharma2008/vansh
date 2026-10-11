#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        int count = (i <= 3) ? (4 - i) : (i - 2);
        for (int j = 0; j < count; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}