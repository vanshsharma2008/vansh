
#include <stdio.h>

int main() {
    int i = 1;

table:
    printf("2 x %d = %d\n", i, 2 * i);
    i++;
    if (i <= 10) goto table;

    return 0;
}