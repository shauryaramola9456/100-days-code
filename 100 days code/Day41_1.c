#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        i++;
    }

    // fgets also stores the newline character
    if (i > 0 && str[i - 1] == '\n')
    {
        i--;
    }

    printf("Number of characters = %d", i);

    return 0;
}