#include <stdio.h>

int main() {
    int choice = 2;

    switch(choice) {
        case 1: printf("You ordered Pizza\n"); break;
        case 2: printf("You ordered Burger\n"); break;
        case 3: printf("You ordered Pasta\n"); break;
        default: printf("Invalid Selection\n");
    }
    return 0;
}