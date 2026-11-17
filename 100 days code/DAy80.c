#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    // Open file for writing
    fp = fopen("students.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records in file
    for(i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");

    // Read records from file
    while(fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %d\n", marks);
    }

    fclose(fp);

    return 0;
}