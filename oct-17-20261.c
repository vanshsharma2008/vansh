#include <stdio.h>

int main() {
    int i = 1, sum = 0;

loop:
    sum += i;
    i++;
    if (i <= 5) goto loop;

    printf("Sum = %d\n", sum);
    return 0;
}
