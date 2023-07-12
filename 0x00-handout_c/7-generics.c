#include <stdio.h>

int product(const void *x, const void *y);
int main()
{
    int x = 2;
    int y = 40;
    printf("Answer: %d x %d = %d\n", x, y, product(&x, &y));
    return (0);
}
int product(const void *x, const void *y)
{
    int *a = (int *)x;
    int *b = (int *)y;

    return *a * *b;
}
float product(const void *x, const void *y)
{
    float *a = (float *)x;
    float *b = (float *)y;

    return *a * *b;
}