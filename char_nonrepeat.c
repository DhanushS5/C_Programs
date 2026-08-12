#include <stdio.h>
int main()
{
    char a[50];
    int count[256] = {0};
    printf("Enter your name: ");
    scanf("%[^\n]", a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        count[(unsigned char)a[i]]++;
    }
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (count[(unsigned char)a[i]] == 1)
        {
            printf("First non-repeating character: %c\n", a[i]);
            return 0;
        }
    }
    printf("No non-repeating character found.\n");
    return 0;
}
