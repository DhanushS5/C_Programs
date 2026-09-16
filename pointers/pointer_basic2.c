#include <stdio.h>
int main() 
{
    int x = 25;
    int *p;
    p = &x;
    printf("Value of x (x) = %d\n", x);
    printf("Address of x (&x) = %p\n", &x);
    printf("Value stored at address using pointer (*p) = %d\n", *p);
    return 0;
}
