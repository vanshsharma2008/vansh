
#include<stdio.h>
int main()
{
    int a[2][2],i,j,mul;

    printf("Enter 4 elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<2;i++)
    {
        mul=1;
        for(j=0;j<2;j++)
            mul*=a[i][j];
        printf("Row %d multiplication = %d\n",i+1,mul);
    }

    for(j=0;j<2;j++)
    {
        mul=1;
        for(i=0;i<2;i++)
            mul*=a[i][j];
        printf("Column %d multiplication = %d\n",j+1,mul);
    }

    return 0;
}
