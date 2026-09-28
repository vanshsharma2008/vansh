#include <stdio.h>

int main() {
    int day = 3;

    if (day == 1) {
        printf("Monday\n");
    } else if (day == 2) {
        printf("Tuesday\n");
    } else if (day == 3) {
        printf("Wednesday\n");
    } else if (day == 4) {
        printf("Thursday\n");
    } else if (day == 5) {
        printf("Friday\n");
    } else {
        printf("Weekend\n");
    }

    return 0;
}