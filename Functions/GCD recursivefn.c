//Program to find GCD of 2 no. using recursive functions
#include <stdio.h>
// GCD - greatest common divisor

int gcdFn(int, int);

int main()
{
    int x, y;

    printf("Enter 2 integer: ");
    scanf("%d%d", &x, &y);

    printf("The GCD of %d and %d is %d", x, y, gcdFn(x,y));

    return 0;
}

int gcdFn(int x, int y)
{
        if ( y != 0)
        {
          return gcdFn(y, x % y);
        }

        else
        {
          return x;
        }

}
