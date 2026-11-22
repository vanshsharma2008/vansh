
#include<stdio.h>
int main()
{
    int row,col,i,j,sum;
    printf("Enter rows and columns\n");
    scanf("%d%d",&row,&col);

    int a[row][col];

    printf("Enter matrix elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
            sum+=a[i][j];
        printf("Row %d sum = %d\n",i+1,sum);
    }

    for(j=0;j<col;j++)
    {
        sum=0;
        for(i=0;i<row;i++)
            sum+=a[i][j];
        printf("Column %d sum = %d\n",j+1,sum);
    }

    return 0;
}
