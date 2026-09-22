//Q40
#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(d = 0; d < r + c - 1; d++)
    {
        for(i = 0; i < r; i++)
        {
            j = d - i;

            if(j >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}