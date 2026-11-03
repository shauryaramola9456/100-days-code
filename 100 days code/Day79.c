#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    // Open the file in read mode
    fp = fopen("numbers.txt", "r");

    // Check if file exists
    if (fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    // Read all integers from the file
    while (fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    // Calculate average
    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("File contains no numbers.");
    }

    // Close the file
    fclose(fp);

    return 0;
}