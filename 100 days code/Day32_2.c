#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0};
    int digit, i, max = 0, most;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    if (num == 0)
    {
        printf("Most occurring digit = 0");
        return 0;
    }

    /* Count frequency of each digit */
    while (num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    /* Find the digit with maximum frequency */
    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            most = i;
        }
    }

    printf("Most occurring digit = %d\n", most);
    printf("It occurs %d times.", max);

    return 0;
}