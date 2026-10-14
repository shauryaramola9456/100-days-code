/*
Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    int ia = *(const int *)a;
    int ib = *(const int *)b;
    return (ia > ib) - (ia < ib);
}

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

    qsort(arr, n, sizeof(int), cmp);
    printf("%d\n", arr[k - 1]);

    return 0;
}
