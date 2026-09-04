#include <stdio.h>
int main() {
    int i, j, n, stars;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        stars = 2 * i - 1;
        for (j = 1; j <= stars; j++) printf("*\n");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        stars = 2 * i - 1;
        for (j = 1; j <= stars; j++) printf("*\n");
        printf("\n");
    }
    return 0;
}