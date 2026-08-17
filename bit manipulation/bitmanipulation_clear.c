#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n = n & ~(1 << 3);
    printf("Number after clearing bit 3: %d\n", n);
    return 0;
}

