#include<stdio.h>
int main()
{
  int n,min,i=1;
  printf("enter a size of an array: ");
  scanf("%d",&n);
  int arr[n];
  printf("enter an array elements: ");
  for(int j=0;j<n;j++)
  {
   scanf("%d",&arr[j]);
  }
  min = arr[0];
  while(i<n)
  {
    if(arr[i]<min)
    {
     min = arr[i];
     i++;
    }
    else
    {
    i++;
    }
  }
  printf("minimum element of an array is %d",min);
  return 0;
}
