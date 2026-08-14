#include <stdio.h>
int main()
{
    char str[100];
    int c = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
       if(str[i]<= '9' && str[i]>= '0')
       {
            c++;
       }
    }
    printf("Number of digits: %d\n", c);
    return 0;
}
