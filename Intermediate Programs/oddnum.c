//Program to find odd no. in an array
#include <stdio.h>

int main()
{
    int a[100], n, i, odd_num;

    printf("Enter size of array:");
    scanf("%d", &n);

    for (i = 0; i < n ; i++)
    {
        printf("Enter number at index %d: ", i);
        scanf("%d",& a[i]);
    }

    printf("odd numbers in the array are:\n");

    for (i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            odd_num = a[i];
            printf("%d\n", odd_num);
        }
    }







}
