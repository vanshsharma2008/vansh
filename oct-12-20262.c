#include <stdio.h>

int main() {
    int num = 1234, temp, first_digit, last_digit, divisor = 1, middle, swapped_num;

    
    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    
    last_digit = num % 10;
    temp = num;

    
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first_digit = temp;

   
    middle = (num % divisor) / 10;

    
    swapped_num = last_digit * divisor + middle * 10 + first_digit;

    printf("Original number: %d\n", num);
    printf("Swapped number: %d\n", swapped_num);

    return 0;
}