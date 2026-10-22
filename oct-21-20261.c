#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) {
                goto end_loops; 
            }
            printf("i=%d, j=%d\n", i, j);
        }
    }

end_loops:
    printf("Exited all loops successfully.\n");
    return 0;
}