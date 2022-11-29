//Program to generate armstrong no.
#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum, digit, limit, num;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for(n = 1; n < limit; n++)
    {
        sum = 0;
        num = n;

       while(num > 0)
       {
           digit = num % 10;
           sum = sum + pow(digit,3);
           num = num / 10;
       }

       if (sum == n)
       {
           printf("%d\n", n);
       }
    }

    return 0;
}
