#include<stdio.h>
// A program to input two numbers and display therir sum, difference , product,and quotient
int main ()
{
    int n1, n2 ;
    int sum, diff , product , quotient;
    printf(" enter the two number ");
    scanf("%d %d",&n1,& n2);
    sum= n1+ n2;
    diff= n1-n2;
    product= n1*n2;
    quotient= n1/n2;
    printf("The sum of the two number is %d\n", sum );
    printf(" The difference of the two number is %d\n", diff);
    printf(" The product of the two number is %d\n", product);
    printf( " The quotient of thw two number is %d\n",quotient);
}