#include <stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int b;
    printf("enter a string: ");
    scanf("%[^\n]",a);
    b = strlen(a);
    printf("%d",b);
    return 0;
}
