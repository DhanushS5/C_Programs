#include<stdio.h>
int main()
{
 int a=2,b=5;
 a=b++;
 int c=++b; 
 printf("%d\n%d\n",a,c);
 return 0;
}
