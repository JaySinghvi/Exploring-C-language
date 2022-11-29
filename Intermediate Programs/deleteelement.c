//Program to delete an element in an array
#include <stdio.h>

int main()
{
    int a[100], i, size, element, position;
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

    printf("Enter the position to delete element: ");
    scanf("%d", &position);

    for (i = position; i <= size-1; i++)
    {
        a[i] = a[i+1];
    }

    size = size - 1;

    printf("The updated array is:\n");
     for (i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }


}
