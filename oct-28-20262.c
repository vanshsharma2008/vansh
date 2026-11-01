#include <stdio.h>

int main() {
    int arr[] = {4, 7, 2, 9, 12};
    int even_count = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) even_count++;
    }

    printf("Count of even numbers: %d\n", even_count);
    return 0;
}