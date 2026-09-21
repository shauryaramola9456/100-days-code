//Q78:
#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int sum = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of main diagonal
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}