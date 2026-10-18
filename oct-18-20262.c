
#include <stdio.h>

int main() {
    int i = 1, j;

outer:
    j = 1;
inner:
    printf("i=%d, j=%d\n", i, j);
    if (i == 2 && j == 2) goto end; // break both loops
    j++;
    if (j <= 3) goto inner;
    i++;
    if (i <= 3) goto outer;

end:
    printf("Exited nested loops.\n");
    return 0;
}
