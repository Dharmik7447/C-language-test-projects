#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int sum[5], i;

    int *p = a;
    int *q = b;
    int *r = sum;

    for (i = 0; i < 5; i++)
    {
        *(r + i) = *(p + i) + *(q + i);
    }

    printf("Elements of array a:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n");

    printf("Elements of array b:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(q + i));
    }

    printf("\n");

    printf("Sum of two arrays:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(r + i));
    }

    printf("\n");
    return 0;
}