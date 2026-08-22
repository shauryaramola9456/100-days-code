//Q28:Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product = product * i;
    }

    printf("%lld", product);

    return 0;
}