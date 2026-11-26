#include<stdio.h>
void swap()
{
    int a=5,b=10,t;
    t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}
int main()
{
    swap();
    return 0;
}