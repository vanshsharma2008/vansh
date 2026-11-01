#include <stdio.h>

int main() {
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];

    for(int i = 0; i < 5; i++) {
        dest[i] = src[i];
    }

    printf("Copied array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", dest[i]);
    }
    
    return 0;
}