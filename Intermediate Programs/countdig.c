//Program to count digits of a no.
#include <stdio.h>

int main()
{
    int n, c;

    printf("Enter a no.: ");
    scanf("%d", &n);

    while (n != 0)
    {
       n /= 10;
       c++;
    }

    printf("Count is %d", c);


    return 0;
}
