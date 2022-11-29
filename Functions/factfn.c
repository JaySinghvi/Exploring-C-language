//Program to generate factorials using functions
#include <stdio.h>

int factFn(int);

int main()
{
    int n;
    long int f;

    printf("Enter an integer: ");
    scanf("%d", &n);

    f = factFn(n);

    printf("The factorial of %d is %d", n, factFn(n));

    return 0;
}

int factFn(int n)
{
    int i;
    long fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
