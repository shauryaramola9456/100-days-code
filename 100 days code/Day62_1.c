/*
Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2048];
    if (!fgets(line, sizeof(line), stdin)) return 0;

    int arr[2000];
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
            arr[n++] = atoi(token);
            token = strtok(NULL, " ,");
        }
    } else {
        char *token = strtok(line, " ,");
        while (token) {
            arr[n++] = atoi(token);
            token = strtok(NULL, " ,");
        }
    }

    if (n == 0) return 0;

    long long max_so_far = arr[0];
    long long curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : curr_max + arr[i];
        if (curr_max > max_so_far) {
            max_so_far = curr_max;
        }
    }

    printf("%lld\n", max_so_far);
    return 0;
}
