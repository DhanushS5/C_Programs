#include<stdio.h>
int main()
{
  int n,max,i=1;
  printf("enter a size of an array: ");
  scanf("%d",&n);
  int arr[n];
  printf("enter an array elements: ");
  for(int j=0;j<n;j++)
  {
   scanf("%d",&arr[j]);
  }
  max = arr[0];
  while(i<n)
  {
    if(arr[i]>max)
    {
     max = arr[i];
     i++;
    }
    else
    {
    i++;
    }
  }
  printf("maximum element of an array is %d",max);
  return 0;
}
