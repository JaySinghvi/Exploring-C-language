// Program to find sum of 2 arrays and store result in third array

#include <stdio.h>
int main()
{
    int a[100], b[100], c[100];
    int i, size;

    printf("Enter size of array:");
    scanf("%d",&size);

    for (i = 0; i < size ; i++)
    {
        printf("Enter number at index %d: ", i);
        scanf("%d",& a[i]);
    }

    for (i = 0; i < size ; i++)
    {
        printf("Enter number at index %d: ", i);
        scanf("%d",& b[i]);
    }

    for (i = 0; i < size ; i++)
    {
        c[i] = a[i] + b[i];
    }

    for (i = 0; i < size ; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
    }
}
