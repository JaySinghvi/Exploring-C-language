//Program to generate sum of NN using recursive functions
#include <stdio.h>

int sumofNNFn(int);

int main()
{
    int n;

    printf("Enter an limit: ");
    scanf("%d", &n);

    printf("The sum of NN upto %d is %d", n, sumofNNFn(n));

    return 0;
}

int sumofNNFn(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return(n + sumofNNFn(n - 1));
    }
}
