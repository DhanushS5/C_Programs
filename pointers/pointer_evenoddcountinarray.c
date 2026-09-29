#include<stdio.h>
int main()
{
 int n,odd=0,even=0;
 printf("enter a size of an array: ");
 scanf("%d",&n);
 int a[n];
 int *ptr=a;
 printf("enter an array elements: ");
 for(int i=0;i<n;i++)
 {
     scanf("%d",ptr+i);
 }
 for(int i=0;i<n;i++)
 {
  if(*(ptr+i)%2 == 0)
  {
    even++;  
  }
  else
  {
    odd++;  
  }
 }
 printf("number of even numbers in an array is %d\n",even);
 printf("number of odd numbers in an array is %d\n",odd);
 return 0;
}
