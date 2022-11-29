//Program to generate fibonacci no. using recursive functions
#include <stdio.h>

int fibFn(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return(1);
    }
    else
    {
        return(fibFn(n - 1) + fibFn(n - 2));
    }
}

int main()
{
    int n, i;

    printf("Enter an limit: ");
    scanf("%d", &n);

    printf("The fibonacci numbers upto %d are: \n", n);

    for(i = 0; i < n; i++)
    {
        printf("%d\n", fibFn(i));
    }

    return 0;
}


