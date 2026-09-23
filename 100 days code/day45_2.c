// Q90 (Strings)
// Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int i;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // lowercase to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // uppercase to lowercase
        }
    }

    printf("%s\n", str);

    return 0;
}