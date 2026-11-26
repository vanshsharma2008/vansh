#include<stdio.h>

void largest()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("Largest = %d",a);
    else
        printf("Largest = %d",b);
}

int main()
{
    largest();
    return 0;
}