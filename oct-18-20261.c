
#include <stdio.h>

int main() {
    int i = 2;

loop:
    printf("%d\n", i);
    i += 2;
    if (i <= 10) goto loop;

    return 0;
}
