/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

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

    if (n == 0 || k <= 0 || k > n) {
        printf("0\n");
        return 0;
    }

    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}
