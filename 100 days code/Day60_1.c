/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2048];
    if (!fgets(line, sizeof(line), stdin)) return 0;

    int arr[2000];
    int n = 0;
    int k = 1;

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
            arr[n++] = atoi(token);
            token = strtok(NULL, " ,");
        }
        char *k_ptr = strstr(close_br + 1, "k");
        if (k_ptr) {
            char *eq = strchr(k_ptr, '=');
            if (eq) k = atoi(eq + 1);
        }
    } else {
        char *token = strtok(line, " ,");
        if (token) {
            int total = atoi(token);
            for (int i = 0; i < total; i++) {
                token = strtok(NULL, " ,");
                if (token) arr[n++] = atoi(token);
            }
            token = strtok(NULL, " ,");
            if (token) k = atoi(token);
        }
    }

    if (n == 0 || k <= 0 || k > n) return 0;

    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max_val) max_val = arr[j];
        }
        if (i == 0) printf("%d", max_val);
        else printf(" %d", max_val);
    }
    printf("\n");

    return 0;
}
