
#include<stdio.h>
int main()
{
    int a[2][2],i,j,s=0;
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
        s+=a[i][j];
    }
    printf("Sum = %d",s);
    return 0;
}
