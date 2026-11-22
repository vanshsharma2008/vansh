#include <stdio.h>

int main() {
    int month = 2;

    switch(month) {
        case 1: printf("January - 31 Days\n"); break;
        case 2: printf("February - 28/29 Days\n"); break;
        case 3: printf("March - 31 Days\n"); break;
        case 4: printf("April - 30 Days\n"); break;
        default: printf("Invalid month\n");
    }
    return 0;
}