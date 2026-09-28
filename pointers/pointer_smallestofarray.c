#include<stdio.h>
int main()
{
    int n,small;
    printf("Enter a size of an array: ");
    scanf("%d",&n);
    int a[n];
    int *ptr = a;
    printf("Enter an array elements: ");
    for(int j=0;j<n;j++)
    {
        scanf("%d",(ptr+j));
    }
    small = *ptr; 
    for(int i=1;i<n;i++)
    {
      if(*(ptr+i) < small)
      {
        small = *(ptr+i);  
      }
    }
    printf("Smallest element of an array is %d\n",small);
    return 0;
}
