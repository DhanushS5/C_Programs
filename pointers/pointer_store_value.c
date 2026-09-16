 #include <stdio.h>
 int main() 
 {
    int num;
    int *ptr;
    ptr = &num;
    *ptr = 50;
    printf("Value of num = %d\n", num);
    printf("Value using pointer = %d\n", *ptr);
    return 0;
 }
