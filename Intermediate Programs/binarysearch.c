//Program to perform binary search
#include <stdio.h>

int main()
{
    int i, n, low, high, mid, found, key, a[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the numbers in sorted order\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element: ", i+1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n",i, a[i]);
    }

    printf("Enter key to search:");
    scanf("%d", &key);

    found = 0;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high)/2;
        if (key == a[mid])
        {
            found = 1;
            break;
        }
        else if(key < a[mid] )
         {
             high = mid - 1;
         }
        else
        {
            low = mid + 1;
        }
    }

    if (found == 1)
    {
        printf("Key is found at position %d", mid);
    }
    else
    {
        printf("key is not found");
    }
}
