#include <stdio.h>

int main() {
    int i = 1, j;

outer:
    j = 1;
inner:
    printf("i=%d, j=%d\n", i, j);
    j++;
    if (j <= 3) goto inner;
    i++;
    if (i <= 2) goto outer;

    return 0;
}