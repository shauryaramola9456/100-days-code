#include <stdio.h>

int main()
{
    int a[10][10], rows, cols, i, j;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}