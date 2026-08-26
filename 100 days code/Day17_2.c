// Q34:Write a program to check if a number is prime.
#include<stdio.h>

int main() {
    int num, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime)
        printf("Prime");
    else
        printf("Not prime");

    return 0;
}