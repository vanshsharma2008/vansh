#include <stdio.h>

int main() {
    int num = 13; 
    int k = 2;    
    if (num & (1 << k)) {
        printf("Bit is SET (1)\n");
    } else {
        printf("Bit is UNSET (0)\n");
    }
    return 0;
}