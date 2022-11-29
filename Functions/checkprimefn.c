//Program to check for prime no. using functions
#include <stdio.h>

int primefn(int);

int main()
{
    int n, p;

    printf("Enter an integer: ");
    scanf("%d", &n);

    p = primefn(n);

    return 0;
}

int primefn(int n)
{
    int prime = 1, i;

   for (i = 2; i < n; i++)
   {
       if(n % 2 == 0)
        {
          prime = 0;
          break;
        }
   }

   if(prime == 0)
   {
       printf("The number is not prime");
   }
   else
   {
       printf("The number is prime");
   }

   return prime;

}
