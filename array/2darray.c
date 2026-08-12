#include<stdio.h>
int main()
{
    int a[10][10],r,c;
    printf("enter a number of rows: ");
    scanf("%d",&r);
    printf("enter a number of columns: ");
    scanf("%d",&c);
    printf("enter a array elements: ");
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is\n");
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
