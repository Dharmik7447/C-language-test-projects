#include <stdio.h>
void Divisiblity(int a)
{
    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5.\n", a);
    }
    else if (a % 3 == 0)
    {
        printf("%d is divisible by 3 only.\n", a);
    }
    else if (a % 5 == 0)
    {
        printf("%d is divisible by 5 only.\n", a);
    }
    else
    {
        printf("%d is not divisible by neither 3 nor 5.\n", a);
    }
}
void main()
{
    Divisiblity(15);
    Divisiblity(10);
}