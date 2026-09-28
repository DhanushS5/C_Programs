#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a size of an array: ");
    scanf("%d",&n);
    int a[n];
    int *ptr = a;
    printf("enter an array elements: ");
    for(int j=0;j<n;j++)
    {
        scanf("%d",(ptr+j));
    }
    for(int i=0;i<n;i++)
    {
       sum += *(ptr+i);     
    }
    printf("sum of an array elements is %d\n",sum);
    return 0;
}

