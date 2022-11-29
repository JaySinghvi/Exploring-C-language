// Program to calculate sum of 3 dig
#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter the digits to sum\n");
    scanf("%d", &num);

    while (num != 0) // Use while loop while calculating sum of digits of a no.
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("The Sum of digits is %d", sum);

    return 0;
}
