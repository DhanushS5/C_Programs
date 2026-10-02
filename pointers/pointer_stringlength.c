#include <stdio.h>
int main()
{
    int count = 0;
    char str[100];
    char *ptr = str;
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    while (*ptr != '\0' && *ptr != '\n')
    {
        count++;
        ptr++;
    }
    printf("length of string is %d\n",count);
    return 0;
}
