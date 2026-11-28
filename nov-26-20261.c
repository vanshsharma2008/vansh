#include <stdio.h>
int main() {
    int a[5]={10,20,5,40,30};
    int i,max=a[0];
    for(i=1;i<5;i++) {
        if(a[i]>max)
            max=a[i];
    }
    printf("%d",max);
    return 0;
}