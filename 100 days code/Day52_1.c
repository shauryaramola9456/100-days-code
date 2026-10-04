/*
Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2
Explanation 1:
Smallest number greater than 5 is 8, whose index is 2.

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1
Explanation 2:
No element greater than 20 is found. So output is -1.

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0
Explanation 3:
Smallest number greater than 0 is 1, whose indices are 0 and 1. The index of the first occurrence is 0.

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2
Explanation 4:
If x is directly present, return the index of its first occurrence. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2048];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    
    int arr[1000];
    int n = 0;
    int x = 0;
    
    char *open_br = strchr(line, '[');
    char *close_br = strchr(line, ']');
    if (open_br && close_br && close_br > open_br) {
        *close_br = '\0';
        char *token = strtok(open_br + 1, " ,");
        while (token) {
            arr[n++] = atoi(token);
            token = strtok(NULL, " ,");
        }
        char *x_ptr = strstr(close_br + 1, "x");
        if (x_ptr) {
            char *eq = strchr(x_ptr, '=');
            if (eq) x = atoi(eq + 1);
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
            if (token) x = atoi(token);
        }
    }

    int ceil_idx = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceil_idx = i;
            break;
        }
    }
    printf("%d\n", ceil_idx);
    return 0;
}
