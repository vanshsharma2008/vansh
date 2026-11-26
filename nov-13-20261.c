#include<stdio.h>

void cube()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    printf("Cube = %d",n*n*n);
}

int main()
{
    cube();
    return 0;
}