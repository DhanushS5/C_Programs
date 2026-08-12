#include<stdio.h>
int main()
{
    int a[10][10],r,c,sum=0,b;
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
    b = a[0][0];
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j] > b)
            {
                b = a[i][j];
            }
        }
    }
    printf("largest element of matrix is %d",b);
    return 0;
}
