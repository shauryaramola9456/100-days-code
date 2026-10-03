/*
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2048];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    
    int nums[1000];
    int n = 0;
    int target = 0;
    
    char *open_br = strchr(line, '[');
    char *close_br = strchr(line, ']');
    if (open_br && close_br && close_br > open_br) {
        *close_br = '\0';
        char *token = strtok(open_br + 1, " ,");
        while (token) {
            nums[n++] = atoi(token);
            token = strtok(NULL, " ,");
        }
        char *t_ptr = strstr(close_br + 1, "target");
        if (t_ptr) {
            char *eq = strchr(t_ptr, '=');
            if (eq) target = atoi(eq + 1);
        }
    } else {
        // Fallback standard input: n, array, target
        char *token = strtok(line, " ,");
        if (token) {
            int total = atoi(token);
            for (int i = 0; i < total; i++) {
                token = strtok(NULL, " ,");
                if (token) nums[n++] = atoi(token);
            }
            token = strtok(NULL, " ,");
            if (token) target = atoi(token);
        }
    }

    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
    return 0;
}
