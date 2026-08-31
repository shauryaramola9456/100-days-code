//Q43:Write a program to check if a number is a strong number.
#include <stdio.h>

int main()
{
    // Declare variables
    int num, temp, digit;
    int sum = 0, fact, i;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    temp = num;

    // Find the sum of factorials of each digit
    while (temp > 0)
    {
        digit = temp % 10;

        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    // Check whether the number is a Strong Number
    if (sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.", num);

    return 0;
}