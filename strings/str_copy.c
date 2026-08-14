#include<stdio.h>
#include<string.h>
int main()
{
 char A[50],B[50];
 printf("enter a string for A: ");
 scanf("%49[^\n]",A);
 strcpy(B,A);
 printf("string B is \"%s\"",B);
 return 0;
}
