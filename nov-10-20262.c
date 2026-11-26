#include<stdio.h>

void square()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Square = %d",n*n);
}

int main()
{
    square();
    return 0;
}