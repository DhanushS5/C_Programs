#include <stdio.h>
#include <string.h>
int main()
{
 char a[50];
 int i,j;
 char t;
 printf("enter a string: ");
 scanf("%49[^\n]",a);
 for( i=0 ,j = strlen(a) - 1; i<j ;i++,j--)
 {
   t = a[i];
   a[i] = a[j];
   a[j] = t;
 }
 printf("the reversed string is \"%s\"",a);
  return 0;
}

