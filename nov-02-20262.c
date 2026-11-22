#include <stdio.h>
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a > b && a > c) {
        printf("a is the largest number");
    } else if (b > a && b > c) {
        printf("b is the largest number");
    } else {
        printf("c is the largest number");
    }
    return 0;   
}