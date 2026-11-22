#include <stdio.h>
int main() {
    char p[] = "123";
    char i[10];
    
    scanf("%s", i);
    printf(strcmp(i, p) ? "No" : "Yes");
    
    return 0;
}