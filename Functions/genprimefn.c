//Program to generate prime no. using function
#include <stdio.h>

int primefn(int);

int main()
{
    int start, stop, i;

    printf("Enter start limit: ");
    scanf("%d", &start);
    printf("Enter stop limit: ");
    scanf("%d", &stop);

    for(i = start; i < stop; i++)
    {

      if(primefn(i) == 0)
        {
          printf("%d is not prime\n", i);
        }
      else
        {
          printf("%d is prime\n", i);
        }
    }


    return 0;
}

int primefn(int n)
{
    int prime = 1, i, start, stop;

   for (i = 2; i < n; i++)
   {
       if(n % 2 == 0)
        {
          prime = 0;
          break;
        }
   }


   return prime;

}
