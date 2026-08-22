//Q25 Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number, second number and operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("%d", a + b);
            
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        case '%':
            if (b != 0)
                printf("%d", a % b);
            else
                printf("Modulo by zero is not allowed");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}