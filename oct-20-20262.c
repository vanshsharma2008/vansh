 #include <stdio.h>

int main() {
    int count = 0, num;
    int sum = 0;

    while (count < 5) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);
        count++;

        if (num < 0) {
            continue; 
        }
        sum += num;
    }
    printf("Sum of positive numbers: %d\n", sum);
    return 0;
}