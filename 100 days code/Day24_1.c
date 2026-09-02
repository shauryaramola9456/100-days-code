// Q47:Write a program to print the following pattern:

#include<stdio.h>

int main()
{
    int i, j;

    // Loop for each row
    for(i = 1; i <= 5; i++)
    {
        // Print stars according to the row number
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}