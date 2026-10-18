#include <stdio.h>

int main() {
    int rows = 4, i = 1, num = 1;
    while (i <= rows) {
        int j = 1;
        while (j <= i) {
            printf("%d ", num);
            num++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}