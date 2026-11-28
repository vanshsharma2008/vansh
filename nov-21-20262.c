#include <stdio.h>

struct Employee {
    int id;
    int salary;
};

int main() {
    struct Employee e = {101, 20000};

    printf("%d\n", e.id);
    printf("%d", e.salary);

    return 0;
}