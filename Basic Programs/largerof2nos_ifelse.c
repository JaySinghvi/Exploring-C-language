//Program to calculate larger of 2 no.
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter 2 numbers : ");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if (b > a)
    {
        printf("%d is greater than %d", b, a);
    }
    else
    {
        printf("Both the numbers are equal");
    }

    return 0;
}
