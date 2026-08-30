//Q41:Write a program to swap the first and last digit of a number.
#include<stdio.h>

int main()
{
    int num, temp, first, last, digits = 0, power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Find the last digit
    last = temp % 10;

    // Count digits
    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
        power = power * 10;
    }

    // Find the first digit
    first = temp;

    // Remove first and last digits
    middle = (num % power) / 10;

    // Form the new number
    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}