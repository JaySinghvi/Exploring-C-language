//Program to check for prime no. in an array and to find sum and avg of prime no. in an array
#include <stdio.h>

int main()
{
    int n, i, a[100], j, prime, count = 0;
    float avg, sum = 0;

    printf("Enter how many values you want to store: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n ");
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("The elements in the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    for(i = 0; i < n; i++)
    {
        j = 2;
        prime = 1;
        while (j < a[i])
        {
           if (a[i] % j == 0)
             {
               prime = 0;
               break;
             }
             j++;
        }
        if( prime == 1)
        {
            sum = sum + a[i];
            count ++;
            avg = sum / count;

        }
    }
    printf("The sum of %d prime numbers in the array is: %f\n",count, sum);
    printf("The average of %d prime numbers is %f",count, avg);


}










