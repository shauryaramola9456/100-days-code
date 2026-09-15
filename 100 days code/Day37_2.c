//Q74; transpose of a matrix 
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print transpose
    for(j = 0; j < cols; j++)
    {
        for(i = 0; i < rows; i++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}