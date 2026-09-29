/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin)) {
        char longest[1000] = "";
        char current[1000] = "";
        int cur_len = 0;
        int max_len = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] != ' ' && s[i] != '\n' && s[i] != '\r' && s[i] != '\t') {
                current[cur_len++] = s[i];
            } else {
                if (cur_len > max_len) {
                    current[cur_len] = '\0';
                    strcpy(longest, current);
                    max_len = cur_len;
                }
                cur_len = 0;
            }
        }
        if (cur_len > max_len) {
            current[cur_len] = '\0';
            strcpy(longest, current);
        }
        printf("%s\n", longest);
    }
    return 0;
}
