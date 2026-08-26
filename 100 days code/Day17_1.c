// Q33:Write a program to check if a number is an Armstrong number.

#include<stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result = result + (remainder * remainder * remainder);
        originalNum = originalNum / 10;
    }

    if (result == num)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
