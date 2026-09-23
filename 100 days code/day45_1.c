// Q89 (Strings)
// Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    char target;
    int i, count = 0;

    scanf("%[^\n]", str); // reads string including spaces until newline
    scanf(" %c", &target); // reads the character to search for (space skips leftover newline)

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}