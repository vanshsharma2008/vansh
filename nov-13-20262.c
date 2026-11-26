#include<stdio.h>

void interest()
{
    int p,r,t;
    printf("Enter P, R and T: ");
    scanf("%d%d%d",&p,&r,&t);

    printf("SI = %d",(p*r*t)/100);
}

int main()
{
    interest();
    return 0;
}