#include <stdio.h> 
int main() {
    float a = 7.5f, b = 2.0f,c;
    c=a;
    a=b;
    b=c;
    printf("After swapping: a = %.1f, b = %.1f\n", a, b);
    return 0;
}