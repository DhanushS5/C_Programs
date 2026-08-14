#include<stdio.h>
#include<string.h>
int main()
{
 char s[50];
 printf("enter a string: ");
 scanf("%49[^\n]",s);
 strupr(s); 
 printf("the upper case of given string is \"%s\"",s);
 return 0;
}
