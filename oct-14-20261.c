#include <stdio.h>

int main() {
    int i = 1;

loop:
    printf("%d\n", i);
    if (i == 3) goto end; 
    i++;
    goto loop;

end:
    printf("Loop ended.\n");
    return 0;
}
