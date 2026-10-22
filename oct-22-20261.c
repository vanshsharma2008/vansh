#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    
    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 == 0) {
            continue; 
        }
        printf("Odd number: %d\n", arr[i]);
    }
    return 0;
}