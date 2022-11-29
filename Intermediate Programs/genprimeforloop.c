//Program to generate prime no. using for loop
#include <stdio.h>

int main()
{
    int start, stop, j, prime, i;

    printf("Enter 2 num: ");
    scanf("%d%d", &start, &stop);


    for (i = start; i < stop; i++)
    {
        prime = 1;
        for (j = 2; j < i; j++)
       {
          if((i % j) == 0)
           {
              prime = 0;
              break;
           }

       }

        if (prime == 1)
         {
            printf("%d is prime\n", i);
         }

        else
         {
            printf("%d is not prime\n", i);
         }

    }


    return 0;
}
