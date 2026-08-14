#include<stdio.h>
int main()
{
 char s[50];
 printf("enter a string: ");
 scanf("%49[^\n]",s);
 for(int i=0; s[i]!='\0';i++)
 {
   if(s[i]>= 'A' && s[i]<= 'Z')
   {
     s[i] = s[i] + 32 ;

   }
 }
 printf("the lower case of given string is \"%s\"",s);
 return 0;
}
