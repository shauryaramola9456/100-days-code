/*
Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

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
        int first_neg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_neg = arr[j];
                break;
            }
        }
        if (i == 0) printf("%d", first_neg);
        else printf(" %d", first_neg);
    }
    printf("\n");

    return 0;
}
