#include<stdio.h>
int main()
{
    int n,large;
    printf("enter a size of an array: ");
    scanf("%d",&n);
    int a[n];
    int *ptr = a;
    printf("enter an array elements: ");
    for(int j=0;j<n;j++)
    {
        scanf("%d",(ptr+j));
    }
    large = *ptr; 
    for(int i=1;i<n;i++)
    {
      if(*(ptr+i) > large)
      {
        large = *(ptr+i);  
      }
    }
    printf("largest element of an array is %d\n",large);
    return 0;
}

