//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main()
{
    // Declare variables
    int n, i;
    float sum = 0.0;
    float numerator = 1, denominator = 2;

    // Take input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for(i = 1; i <= n; i++)
    {
        sum = sum + (numerator / denominator);

        // Move to the next odd numerator and even denominator
        numerator = numerator + 2;
        denominator = denominator + 2;
    }

    // Display the result
    printf("Sum of the series = %.2f\n", sum);

    return 0;
}