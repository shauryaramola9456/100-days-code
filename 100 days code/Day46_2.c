/*
Q92: Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count[str[i] - 'a']++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[str[i] - 'a'] > 1)
        {
            printf("First repeating alphabet: %c", str[i]);
            return 0;
        }
    }

    printf("No repeating alphabet");

    return 0;
}