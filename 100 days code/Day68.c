#include <stdio.h>

int main()
{
    int n, i, sum = 0, total;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}