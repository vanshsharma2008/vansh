#include <stdio.h>

int main() {
    int score = 85;

    if (score >= 90) {
        printf("Grade A\n");
    } else if (score >= 75) {
        printf("Grade B\n");
    } else {
        printf("Grade C\n");
    }

    return 0;
}