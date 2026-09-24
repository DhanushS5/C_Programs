#include <stdio.h>
int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; 
    printf("Accessing array elements using pointers:\n");
    for(int i = 0; i < 5; i++) 
    {
        printf("Element %d: %d (Address: %p)\n", i, *(ptr), (void*)ptr);
        ptr++;
    }
    
    return 0;
}

