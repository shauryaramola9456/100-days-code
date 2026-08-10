#include<stdio.h>
// A program to input two number and display their sum.
int main ()
{
    int n1 , n2 , sum;
    printf("Enter the two number ");
    scanf("%d %d", &n1 ,&n2);
    sum = n1 + n2;
    printf("The sum of the number is %d", sum);
    return 0;
}
