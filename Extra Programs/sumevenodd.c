//Program to find sum of even and odd no. using for loop
#include <stdio.h>

int main()

{
    int num, sum_even = 0, sum_odd = 0, i;

    printf("Enter the value of num:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
         printf("%d\n",i);

    if (i % 2 == 0)
        sum_even = sum_even + i;

    else
        sum_odd = sum_odd + i;
    }

     printf ("Sum of odd numbers up to %d is %d\n", num, sum_odd);
     printf ("Sum of even numbers up to %d is %d\n", num, sum_even);

     return 0;
}
