#include <stdio.h>

int main() {
    int arr[] = {2, 5, 2, 8, 2, 9};
    int target = 2, count = 0;

    for(int i = 0; i < 6; i++) {
        if(arr[i] == target) count++;
    }

    printf("Number %d appears %d times\n", target, count);
    return 0;
}