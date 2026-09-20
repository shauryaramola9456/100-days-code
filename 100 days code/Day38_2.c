//Q76
#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int i, j;
    int symmetric = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(r != c)
    {
        symmetric = 0;
    }
    else
    {
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }

            if(symmetric == 0)
                break;
        }
    }

    if(symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}