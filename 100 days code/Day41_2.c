#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters are:\n");

    while (str[i] != '\0' && str[i] != '\n')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}