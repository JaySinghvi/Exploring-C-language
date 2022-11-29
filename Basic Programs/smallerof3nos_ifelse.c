//Program to calculate the smaller of 3 no.
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 3 numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b)
    {
      if (a < c)
      {
          printf("Smallest is %d", a);
      }
      else
      {
        printf("Smallest is %d", c);
      }
    }
    else
    {
        if (b < c)
        {
            printf("Smallest is %d", b);
        }
        else
        {
            printf("Smallest is %d", c);
        }
    }

    return 0;
}
