
#include <stdio.h>

int main() {
    int num;

repeat:
    printf("Enter a number (0 to exit): ");
    scanf("%d", &num);
    if (num != 0) goto repeat;

    printf("Exited.\n");
    return 0;
}
