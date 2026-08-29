// Q39: Write a program to find the product of odd digits of a number.
#include<stdio.h>

int main() {
    int n, digit, product = 1, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }

        n /= 10;
    }

    if (found)
        printf("%d", product);
    else
        printf("No odd digits");

    return 0;
}