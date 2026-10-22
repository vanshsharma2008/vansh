#include <stdio.h>

int main() {
    int i = 0;
    do {
        i++;
        if (i % 2 == 0) {
            continue; 
        }
        printf("%d ", i);
    } while (i < 6);
    return 0;
}