#include <stdio.h>

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int key = 30, found = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found) printf("Element found!\n");
    else printf("Element not found!\n");
    return 0;
}