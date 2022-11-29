//Program to generate factorials using recursive functions
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
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return(n * factFn(n - 1));
    }
}
