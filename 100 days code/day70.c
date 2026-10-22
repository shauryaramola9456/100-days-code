#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert all letters to lowercase
    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    // Convert first character to uppercase
    str[0] = toupper(str[0]);

    printf("Sentence case: %s", str);

    return 0;
}