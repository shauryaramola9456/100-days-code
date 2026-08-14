//Q9 Write a program to calculate simple and compound interest for given principal,rate and time.
#include<stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time;
    float SI, amount, CI;
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    // Simple Interest
    SI = (principal * rate * time) / 100;
    // Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    CI = amount - principal;
    // Output
    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);
    printf("\nTotal Amount (Compound) = %.2f\n", amount);
    return 0;
}
