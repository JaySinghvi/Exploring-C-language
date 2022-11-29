//Program to generate prime no. using while loop
#include <stdio.h>

int main()
{
    int start, stop, j, prime, i;

    printf("Enter 2 num: ");
    scanf("%d%d", &start, &stop);

    i = start;
    while (i < stop)
    {
        j = 2;
        prime = 1;
       while(j < i)
       {
          if((i % j) == 0)
           {
              prime = 0;
              break;
           }
           j = j + 1;
       }

        if (prime == 1)
         {
            printf("%d is prime\n", i);
         }

        else
         {
            printf("%d is not prime\n", i);
         }
         i = i + 1;
    }


    return 0;
}
