#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    n = n ^ (1 << 4);
    printf("Number after toggling bit 4: %d\n", n);
    return 0;
}

