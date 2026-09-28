#include <stdio.h>

int main() {
    char signal = 'R'; // R = Red, Y = Yellow, G = Green

    switch(signal) {
        case 'R': case 'r': printf("Stop!\n"); break;
        case 'Y': case 'y': printf("Slow Down!\n"); break;
        case 'G': case 'g': printf("Go!\n"); break;
        default: printf("Invalid Signal Color\n");
    }
    return 0;
}