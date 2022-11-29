//Program to reverse a no. using functions
#include <stdio.h>

int revFn(int);

int main()
{
    int n, rev;

    printf("Enter an integer to reverse: ");
    scanf("%d", &n);

    rev = revFn(n);

    printf("The reverse of %d is %d", n, revFn(n));

    return 0;
}

int revFn(int n)
{
    int rdigit, sum = 0;

    while (n != 0)
    {
        rdigit = n % 10;
        sum = sum * 10 + rdigit;
        n = n / 10;
    }
    return sum;
}
