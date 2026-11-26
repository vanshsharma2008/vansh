#include<stdio.h>

void factorial()
{
    int n,i,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        f=f*i;

    printf("Factorial = %d",f);
}

int main()
{
    factorial();
    return 0;
}