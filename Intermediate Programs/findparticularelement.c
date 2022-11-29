/* Write a C program to accept a value for n and store n numbers in an array and
search for particular number which is taken as input from the user. If found, print the index where it is
 found and if not found print a message that the number is not in the array.*/

 #include <stdio.h>
 int main()
 {
     int size, i, a[5], search, found;

     printf("Enter size of array: ");
     scanf("%d", &size);

     printf("Enter elements of array: ");

     for (i = 0; i < size; i++)
     {
         scanf("%d", &a[i]);
     }

     printf("Enter a number to find in array: ");
     scanf("%d", &search);

     found = 0;

     for (i = 0; i < size; i++)
     {
         if (a[i] == search)
         {
             found = 1;
             break;
         }
     }

     if (found == 1)
     {
        printf("%d if found at index %d", search, i+1);
     }
     else
     {
         printf("%d is not found in array", search);
     }

    return 0;
 }
