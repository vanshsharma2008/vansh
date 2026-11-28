#include <stdio.h>

struct Book {
    int id;
    float price;
};

int main() {
    struct Book b = {1, 250.5};

    printf("%d\n", b.id);
    printf("%.2f", b.price);

    return 0;
}