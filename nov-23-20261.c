#include <stdio.h>

struct Mobile {
    int price;
    int model;
};

int main() {
    struct Mobile m = {15000, 12};

    printf("%d\n", m.price);
    printf("%d", m.model);

    return 0;
}