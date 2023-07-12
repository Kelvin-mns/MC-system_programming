#include <stdio.h>

int main()
{
    int u = 10;
    int *y = malloc(sizeof(int) + 3);
    
    if (y == NULL)
    {
        printf("cannot use the variable\n");
    }
    else
    {
        *y = 6000;
        printf("y: %d\n", *y);
    }
    float *n = (float *)malloc(30);
    int p[] = {2, 4, 5, 67, 8, 9, 0};

    p[8] = 300;
    printf("size: %d\n", p[30];
    printf("size: %d\n", sizeof(y));
    printf("size: %d\n", sizeof(u));
    printf("size: %d\n", sizeof(n));

    free(y);
    free(n);
    return 0;
}