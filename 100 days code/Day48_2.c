/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        char word[1000];
        int wlen = 0;
        for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
            if (s[i] == ' ') {
                for (int j = wlen - 1; j >= 0; j--) putchar(word[j]);
                putchar(' ');
                wlen = 0;
            } else {
                word[wlen++] = s[i];
            }
        }
        for (int j = wlen - 1; j >= 0; j--) putchar(word[j]);
        putchar('\n');
    }
    return 0;
}
