#include<stdio.h>
void perimeter()
{
    int l,b;
    scanf("%d%d",&l,&b);
    printf("Perimeter = %d",2*(l+b));
}
int main()
{
    perimeter();
    return 0;
}