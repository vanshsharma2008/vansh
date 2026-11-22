#include <stdio.h>

int main() {
    int a = 15, b = 25, c = 20;

    if (a > b) {
        if (a > c) {
            printf("%d is largest\n", a);
        } else {
            printf("%d is largest\n", c);
        }
    } else {
        if (b > c) {
            printf("%d is largest\n", b);
        } else {
            printf("%d is largest\n", c);
        }
    }
    return 0;
}