#include <stdio.h>
#include <string.h>
int main()
{
 char a[50];
 int i,j,c=1;
 printf("enter a string: ");
 scanf("%49[^\n]",a);
 for( i=0 ,j = strlen(a) - 1; i<j ;i++,j--)
 {
   if(a[i] != a[j])
   {
     c = 0;
     break;
   }
 
 }
 if(c==1)
 {
  printf("the given string is palindrome.");
 }
 else
 {
  printf("the given string is not palindrome.");
 }

  return 0;
}
