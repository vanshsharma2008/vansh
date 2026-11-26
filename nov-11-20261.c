#include<stdio.h>

void check()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    check();
    return 0;
}