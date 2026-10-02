#include <stdio.h>
int stringlength(char *ptr)
{
    int count = 0;
    while (*ptr != '\0' && *ptr != '\n')
    {
        count++;
        ptr++;
    }
    return count;
}
int main()
{
    char str1[100];
    char str2[100];
    char *ptr1 = str1;
    char *ptr2 = str2;
    printf("Enter string one: ");
    fgets(str1, sizeof(str1), stdin);
    printf("enter string two: ");
    fgets(str2, sizeof(str2), stdin);
    if (stringlength(ptr1) != stringlength(ptr2))
    {
        printf("Both strings are not equal\n");
        return 0;
    }
    while (*ptr1 != '\0' && *ptr1 != '\n')
    {
        if (*ptr1 != *ptr2)
        {
            printf("Both strings are not equal\n");
            return 0;
        }
        ptr1++;
        ptr2++;
    }
    printf("Both strings are equal\n");
    return 0;
}
