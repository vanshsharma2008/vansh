#include <stdio.h>

struct Car {
    int number;
    float mileage;
};

int main() {
    struct Car c = {1234, 20.5};

    printf("%d\n", c.number);
    printf("%.1f", c.mileage);

    return 0;
}