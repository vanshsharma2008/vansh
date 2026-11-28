#include <stdio.h>
int main() {
    int a=12,b=18,i;

    for(i=1;;i++) {
        if(i%a==0 && i%b==0)
            break;
    }

    printf("LCM = %d",i);
    return 0;
}