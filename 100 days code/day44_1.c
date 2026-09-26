// Q87 (Strings)
// Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int i, spaces = 0, digits = 0, special = 0;
    char ch;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}