//Program to
#include <stdio.h>
void readarray (int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter element at index %d:", i);
        scanf("%d", &A[i]);
    }
    printf("\n\n");
}

void printarray (int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("A[%d] = %d\n",i, A[i]);
    }
    printf("\n\n");
}

int fact(int num)
{
    if (num >= 1)
    {
        return num * fact(num - 1);
    }
    else
    {
        return 1;
    }
}

int replacefact(int num)
{
    if(num <= 8)
    {
        num = fact(num);
    }

    return num;
}

int checkpalinum (int num)
{
    int j, rev = 0, rdigit, n;
    j = num;
    n = num;

    while(j != 0)
    {
        rdigit = j % 10;
        rev = rev * 10 + rdigit;
        j = j / 10;
    }

    if(n == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int prodofdigit (int num)
{
    int prod = 1, rdigit;
    while (num > 0)
    {
        rdigit = num % 10;
        prod = prod * rdigit;
        num = num / 10;
    }

    return prod;
}

int sumofdigit (int num)
{
    int sum = 0, rdigit;
    while (num > 0)
    {
        rdigit = num % 10;
        sum = sum + rdigit;
        num = num / 10;
    }

    return sum;
}

int replacepalinum(int num)
{
    int check = checkpalinum(num);
    int res = 0;

    if(check == 0)
    {
        res = prodofdigit(num);
    }
    else
    {
        res = sumofdigit(num);
    }
    return res;
}

void palindrome (int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
       printf("Current element is: %d\n",A[i]);
       A[i] = replacepalinum(A[i]);
       printf("Replaced value is: %d\n",A[i]);

    }
    printf("\n\n");

    return 0;
}

int main()
{
    int n;
    printf("Enter the number of values to store in an array: ");
    scanf("%d", &n);
    int A[n];
    readarray(A, n);
    printarray(A, n);
    palindrome(A, n);

    for(int i = 0; i < n; i++)
    {
        A[i] = replacefact(A[i]);
        printf("Replaced value is: %d\n", A[i]);
    }

    return 0;
}








