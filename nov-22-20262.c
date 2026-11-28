#include <stdio.h>

struct Student {
    int roll;
    char grade;
};

int main() {
    struct Student s = {5, 'A'};

    printf("%d\n", s.roll);
    printf("%c", s.grade);

    return 0;
}