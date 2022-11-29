//Program to insert an element in C
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

    printf("Enter the value of element to enter: ");
    scanf("%d", &element);

    printf("Enter the position of element: ");
    scanf("%d", &position);

    for (i = size; i >= position; i--)
    {
        a[i] = a[i-1];
    }

    a[position-1] = element;

    size = size + 1;

    printf("The updated array is:\n");
     for (i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }


}

