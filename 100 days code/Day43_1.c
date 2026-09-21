//Q85
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of string
    while (str[length] != '\0')
    {
        length++;
    }

    printf("Reversed string: ");

    // Print from last character to first
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}