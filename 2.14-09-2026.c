#include <stdio.h>

int main() {
    int age = 12;
    int is_matinee = 1; // 1 for true, 0 for false

    if (age < 18) {
        if (is_matinee == 1) {
            printf("Child Matinee Ticket: $5\n");
        } else {
            printf("Child Ticket: $8\n");
        }
    } else {
        if (is_matinee == 1) {
            printf("Adult Matinee Ticket: $10\n");
        } else {
            printf("Adult Ticket: $15\n");
        }
    }
    return 0;
}