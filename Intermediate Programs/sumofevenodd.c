//Program to find sum of even and odd no. in an array
#include <stdio.h>

int main()
{
    int a[100], n, i, sum_even = 0, sum_odd = 0;

    printf("Enter size of array:");
    scanf("%d", &n);

    for (i = 0; i < n ; i++)
    {
        printf("Enter number at index %d: ", i);
        scanf("%d",& a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            sum_even = sum_even + a[i];
        }
        else
        {
            sum_odd = sum_odd + a[i];
        }
    }

        printf("sum of even numbers in an array is %d\n", sum_even);
        printf("sum of odd numbers in an array is %d\n", sum_odd);


}
