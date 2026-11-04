#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Take student details and store them in file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        // Write record into file
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    printf("\nStudent Records:\n");

    // Read and display records from file
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %d\n", marks);
    }

    fclose(fp);

    return 0;
}