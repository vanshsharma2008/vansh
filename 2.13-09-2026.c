#include <stdio.h>

int main() {
    int user_id = 101;
    int pin = 1234;

    if (user_id == 101) {
        if (pin == 1234) {
            printf("Access Granted\n");
        } else {
            printf("Incorrect PIN\n");
        }
    } else {
        printf("User Not Found\n");
    }
    return 0;
}