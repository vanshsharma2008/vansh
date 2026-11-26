#include<stdio.h>
void avg()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Average = %.2f",(a+b+c)/3.0);
}
int main()
{
    avg();
    return 0;
}