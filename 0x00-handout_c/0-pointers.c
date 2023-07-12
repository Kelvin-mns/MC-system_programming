#include <stdio.h>

int main()
{
    int x = 1000;
    int *y = &x;

    printf("y: %d\n", *y);
    printf("y_2: %p\n", y);
    printf("x: %d\n", *y);
     printf("x_2: %p\n", &y); 
    return 0
}