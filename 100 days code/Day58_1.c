/*
Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2048];
    if (!fgets(line, sizeof(line), stdin)) return 0;

    int nums[2000];
    int n = 0;

    char *p = line;
    char *open_br = NULL, *close_br = NULL;
    while ((open_br = strchr(p, '[')) != NULL) {
        close_br = strchr(open_br, ']');
        if (close_br && close_br > open_br + 1) break;
        p = open_br + 1;
    }

    if (open_br && close_br && close_br > open_br + 1) {
        *close_br = '\0';
        char *token = strtok(open_br + 1, " ,");
        while (token) {
            nums[n++] = atoi(token);
            token = strtok(NULL, " ,");
        }
    } else {
        char *token = strtok(line, " ,");
        while (token) {
            nums[n++] = atoi(token);
            token = strtok(NULL, " ,");
        }
    }

    if (n == 0) {
        printf("[]\n");
        return 0;
    }

    long long left[2000];
    long long right[2000];
    long long ans[2000];

    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        ans[i] = left[i] * right[i];
        if (i == 0) printf("%lld", ans[i]);
        else printf(",%lld", ans[i]);
    }
    printf("]\n");

    return 0;
}
