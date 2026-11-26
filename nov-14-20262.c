#include<stdio.h>

void sum()
{
    int n,i,s=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        s=s+i;

    printf("Sum = %d",s);
}

int main()
{
    sum();
    return 0;
}