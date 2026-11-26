#include<stdio.h>

void check()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n>0)
        printf("Positive");
    else if(n<0)
        printf("Negative");
    else
        printf("Zero");
}

int main()
{
    check();
    return 0;
}