#include <stdio.h>
int main() 
{
    int a,b,c,d=0,sum=0,t,e,f,g;
    printf("enter a number: ");
    scanf("%d",&a);
    t = a;
    e =a;
    while(t!=0)
    {
      b = t%10;
      d++;
      t = t/10;
    }
    while(e!=0)
    {
    f = d;
    g = e%10;
    c = 1;
     while(f>0)
    {
         c=c*g;
          f--;
    }
      sum = sum + c;
      e = e/10; 
    }
      if(sum == a)
    {
      printf("the given number is armstrong number ");         
    }
    else 
    {
        printf("the given number is not an armstrong number ");
    }
    return 0;
}
