
#include <stdio.h>

int main() {
    int i = 5;

countdown:
    printf("%d\n", i);
    i--;
    if (i > 0) goto countdown;

    return 0;
}