#include <stdio.h>
int main()
{
    char a[50];
    int b = 0;
    printf("enter a string: ");
    scanf("%[^\n]",a);
    int i = 0;
    while(a[i]!='\0')
    {
     b++;
     a[i++];
    }
    printf("%d",b);
    return 0;
}
