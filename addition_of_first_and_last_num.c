#include <stdio.h>
int main()
{
    int a, b, c, sum;

    printf("Enter first 3 digit positive integer: \n");
    scanf("%d", &a);

    printf("Enter second 3 digit positive integer number: \n");
    scanf("%d", &b);

    printf("Enter third 3 digit positive integer: \n");
    scanf("%d", &c);

    if ((a < 100 || a > 999) || (b < 100 || b > 999) || (c < 100 || c > 999))
    {
        printf("Please enter only 3 digit positive integers!\n");
    }
    else
    {
        sum = a + c;
        printf("Sum of first and last number is: %d\n", sum);
    }
    return 0;
}