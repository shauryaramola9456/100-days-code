/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

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
        printf("-1\n");
        return 0;
    }

    // Boyer-Moore Majority Vote Algorithm
    int candidate = nums[0];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int actual_count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) actual_count++;
    }

    if (actual_count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
