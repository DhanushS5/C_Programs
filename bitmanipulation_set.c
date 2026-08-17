#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n = n | (1 << 2);
    printf("Number after setting bit 2: %d\n", n);
    return 0;
}

