#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n & (1 << 2))
        printf("Bit 2 is SET\n");
    else
        printf("Bit 2 is NOT SET\n");
    return 0;
}

