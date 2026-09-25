//Q86
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of string
    while (str[length] != '\0')
    {
        length++;
    }

    // Compare characters
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }

    return 0;
}