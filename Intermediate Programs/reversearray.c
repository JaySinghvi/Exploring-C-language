//Program to reverse an array
#include <stdio.h>

int main()
{
    int a[100], i, size, rev[100];

    printf("Enter size of array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d elements: ", i+1);
        scanf("%d", &a[i]);

    }

    for (i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);

    }

    for (i = 0; i < size; i++)
    {
        rev[i] = a[size-i-1];

    }
    printf("On reversing the array elements are:\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n",i, rev[i]);
    }
}
