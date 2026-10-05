/*
Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3
Explanation 1:
The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.

Input 2:
nums = [1,2,3]
Output 2:
-1
Explanation 2:
There is no index that satisfies the conditions in the problem statement.

Input 3:
nums = [2,1,-1]
Output 3:
0
Explanation 3:
The pivot index is 0. Left sum = 0 (no elements to the left), Right sum = 1 + (-1) = 0.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[2048];
    if (!fgets(line, sizeof(line), stdin)) return 0;
    
    int nums[1000];
    int n = 0;
    
    char *open_br = strchr(line, '[');
    char *close_br = strchr(line, ']');
    if (open_br && close_br && close_br > open_br) {
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

    long long total_sum = 0;
    for (int i = 0; i < n; i++) total_sum += nums[i];

    long long left_sum = 0;
    int pivot = -1;
    for (int i = 0; i < n; i++) {
        if (left_sum == total_sum - left_sum - nums[i]) {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }
    printf("%d\n", pivot);
    return 0;
}
