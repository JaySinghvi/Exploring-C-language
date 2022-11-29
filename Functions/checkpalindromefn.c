//Program to check for palindrome in a matrix
#include <stdio.h>

int Palindrome(int n)
{
    int rev = 0, rdigit, num;

    num = n;
    while(num != 0)
    {
        rdigit = num % 10;
        rev = rev * 10 + rdigit;
        num = num / 10;
    }

    if(rev == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int main()
{
    int a[500][500], i, j, m, n;

    printf("Enter the no. of rows: ");
    scanf("%d", &m);

    printf("Enter the no. of columns: ");
    scanf("%d", &n);

    printf("Enter the value for each element:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter value for a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The given matrix is:\n");// Steps to write a matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n\n");
    }

    printf("The output matrix after palindrome check is:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(Palindrome(a[i][j]))
            {
                printf("\t1");
            }
            else
            {
                printf("\t%d", a[i][j]);
            }
        }
      printf("\n\n");
    }
}









