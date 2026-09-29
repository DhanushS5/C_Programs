#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    int *ptr = a;
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    int *left = a;
    int *right = a + n - 1;
    while (left < right)
    {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
