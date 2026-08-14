#include <stdio.h>
int main()
{
    char A[50], B[50];
    printf("Enter a string for A: ");
    scanf("%49[^\n]", A);
    printf("Enter a string for B: ");
    scanf("%49[^\n]", B);
    int i=0,c=0;
    while(A[i]!='\0')
    {
     if(A[i]==B[i])
     {
      c=1;
      i++;
     }
    }
    if(c==1)
    {
     printf("the given strings are equal");
    }
    else
    {
     printf("the given strings are not equal");
    }
    return 0;
}

