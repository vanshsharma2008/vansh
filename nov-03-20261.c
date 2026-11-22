#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&row,&col);
printf("enter the elements of 1st matrix\n");
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter the elements of  matrix\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
         printf("%d",a[i][j]);
        }  
        printf("\n");
    }
    return 0;
}