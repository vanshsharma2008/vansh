#include<stdio.h>
void leap()
{
    int y;
    scanf("%d",&y);
    if(y%400==0 || (y%4==0 && y%100!=0))
        printf("Leap Year");
    else
        printf("Not Leap Year");
}
int main()
{
    leap();
    return 0;
}