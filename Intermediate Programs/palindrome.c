//Program to find the palindrome
#include <stdio.h>

int main()
{
    int n, rev = 0, rdigit, num;

    printf("Enter a no.: ");
    scanf("%d", &n);
    num = n;

    while (n != 0)
    {
      rdigit = n % 10;
      rev = rev * 10 + rdigit;
      n = n / 10;

      printf("Tracing: n = %d, rdigit = %d, rev = %d\n", n, rdigit, rev);
    }

    printf("Reverse of %d is %d\n", num, rev );

    if (rev == num)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }
}
