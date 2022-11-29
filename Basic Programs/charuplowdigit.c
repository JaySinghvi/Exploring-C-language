// Program to check a character and print if it is  uppercase, lowercase or digit

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf(" The character is lowercase");
    }

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The character is uppercase");
    }

    if (ch >= '0' && ch <= '9')
    {
        printf("The character is digit");
    }
}
