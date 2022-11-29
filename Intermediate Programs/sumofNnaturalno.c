//Program to find sum of natural numbers
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a no.: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of %d natural numbers is %d", n, sum);

    return 0;
}
