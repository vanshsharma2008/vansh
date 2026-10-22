 #include <stdio.h>

int main() {
    for (int i = 1; i <= 8; i++) {
        if (i == 5) {
            continue; 
        }
        printf("%d ", i);
    }
    return 0;
}