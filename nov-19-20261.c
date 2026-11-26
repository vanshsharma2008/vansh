#include<stdio.h>
void min()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
        printf("%d",a);
    else
        printf("%d",b);
}
int main()
{
    min();
    return 0;
}