//Program to find odd or even using if else
#include <stdio.h>

int main()
{
    int n;

    printf("Enter to number to check if it is even or odd: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}
