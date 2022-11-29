//Program to check whether the number given is odd or even

#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if ((num%2)==0)
        printf("%d is even",num);
    if ((num%2)==1)
        printf("%d is odd",num);
}
