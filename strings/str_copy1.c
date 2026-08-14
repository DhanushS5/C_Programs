#include<stdio.h>
int main()
{
 char A[50],B[50];
 printf("enter a string for A: ");
 scanf("%49[^\n]",A);
 int i =0;
 while(A[i]!='\0')
 {
  B[i] = A[i];
  i++;
 }
 printf("string B is \"%s\"",B);
 return 0;
}
