#include<stdio.h>
void check()
{
    int n;
    scanf("%d",&n);
    if(n%5==0)
        printf("Divisible");
    else
        printf("Not Divisible");
}
int main()
{
    check();
    return 0;
}