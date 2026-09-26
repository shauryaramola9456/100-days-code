// Q88 (Strings)
// Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int i;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("%s\n", str);

    return 0;
}