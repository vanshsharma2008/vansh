#include <stdio.h>

int main() {
    int year = 2024;

    int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("Is %d a leap year? %d\n", year, isLeap); 

    return 0;
}