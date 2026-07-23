#include<stdio.h>
int main()
{
  int n,min,max,a,b,i=1;
  printf("enter a size of an array: ");
  scanf("%d",&n);
  int arr[n];
  printf("enter an array elements: ");
  for(int j=0;j<n;j++)
  {
   scanf("%d",&arr[j]);
  }
  max = arr[0];
  min = arr[0];
  while(i<n)
  {
    if(arr[i]<min)
    {
     min = arr[i];
     i++;
    }
    else if(arr[i]>max)
    {
     max = arr[i];
     i++;
    }
    else
    {
    i++;
    }
  }
  printf("minimum element of an array is %d\n",min);
  printf("maximum element of an array is %d",max);
  return 0;
}
