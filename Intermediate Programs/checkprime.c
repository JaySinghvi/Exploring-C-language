//Program to check for prime no.
#include <stdio.h>

int main()
{
    int n, j, prime = 1;

    printf("Enter a num: ");
    scanf("%d", &n);

    for (j = 2; j < n; j++)
    {
        if((n % j) == 0)
        {
            prime = 0;
            break;
        }
    }

        if (prime == 1)
        {
            printf("Entered num is prime");
        }
        else
        {
            printf("Entered num is not prime");
        }
    return 0;
}




