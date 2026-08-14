#include<stdio.h>
#include<string.h>
int main()
{
 char A[50],B[50];
 printf("enter a string for A: ");
 scanf("%49[^\n]",A);
 printf("enter a string for B: ");
 scanf(" %49[^\n]",B);
 if(strcmp(B,A)==0)
 {
   printf("given strings are equal");
 }
 else
 {
 printf("given strings are not equal");
 }
 return 0;
}
