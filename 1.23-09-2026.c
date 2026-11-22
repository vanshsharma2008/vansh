#include <stdio.h>

int main() {
    char grade = 'A';

    switch(grade) {
        case 'A': printf("Excellent!\n"); break;
        case 'B': printf("Good Job!\n"); break;
        case 'C': printf("Average\n"); break;
        case 'F': printf("Failed\n"); break;
        default: printf("Invalid Grade\n");
    }
    return 0;
}