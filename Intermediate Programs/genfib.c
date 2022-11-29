//Program to generate fibonacci no.
#include <stdio.h>

int main()
{
    int first = 0, second = 1, i, limit, next;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("%d\n", first);

    while(second < limit)
    {

        printf("%d\n", second);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;

}
